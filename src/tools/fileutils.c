#define _FILE_OFFSET_BITS 64
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h> 
#include <sys/stat.h> 
#include <unistd.h>
#include <limits.h>
#include <stdint.h>

#ifndef MAX_PATH
#define MAX_PATH 4096
#endif

#include "debug.h"
#include "fileutils.h"

static const char* x86lib  = "\x7f" "ELF" "\x01" "\x01" "\x01" "\x03" "\x00" "\x00" "\x00" "\x00" "\x00" "\x00" "\x00" "\x00" "\x02" "\x00" "\x03" "\x00";
static const char* x64lib  = "\x7f" "ELF" "\x02" "\x01" "\x01" "\x03" "\x00" "\x00" "\x00" "\x00" "\x00" "\x00" "\x00" "\x00" "\x02" "\x00" "\x3e" "\x00";
static const char* bashsign= "#!/bin/bash";
static const char* shsign  = "#!/bin/sh";
static const char* bashsign2="#!/usr/bin/env bash";

static char* ResolvePathInner(const char* path, int resolve_symlink) {
    if (resolve_symlink) {
        return box_realpath(path, NULL);
    } else {
        return box_strdup(path);
    }
}

static char* ResolveFileInner(const char* filename, path_collection_t* paths, int resolve_symlink) {
    char p[MAX_PATH];
    if(filename[0]=='/') {
        return ResolvePathInner(filename, resolve_symlink);
    }
    for (int i=0; i<paths->size; ++i) {
        if(paths->paths[i][0]!='/') {
            // not an absolute path...
            if(!getcwd(p, sizeof(p))) return NULL;
            if(p[strlen(p)-1]!='/')
                strcat(p, "/");
            strcat(p, paths->paths[i]);
        } else
            strcpy(p, paths->paths[i]);
        strcat(p, filename);
        if(FileExist(p, IS_FILE)) {
            return ResolvePathInner(p, resolve_symlink);
        }
    }

    return ResolvePathInner(filename, resolve_symlink);
}

char* ResolveFile(const char* filename, path_collection_t* paths) {
    return ResolveFileInner(filename, paths, 1);
}

char* ResolveFileSoft(const char* filename, path_collection_t* paths) {
    return ResolveFileInner(filename, paths, 0);
}

int FileIsX64ELF(const char* filename)
{
    FILE *f = fopen(filename, "rb");
    if(!f)
        return 0;
    char head[20] = {0};
    int sz = fread(head, 20, 1, f);
    fclose(f);
    if(sz!=1) {
        return 0;
    }
    head[7] = x64lib[7];   // this one changes
    head[8] = x64lib[8];   // AppImage customized this
    head[9] = x64lib[9];   // and this one too
    head[10] = x64lib[10];   // and that last one too
    head[16]&=0xfe;
    if(!memcmp(head, x64lib, 20))
        return 1;
    return 0;
}

int FileIsX86ELF(const char* filename)
{
    FILE *f = fopen(filename, "rb");
    if(!f)
        return 0;
    char head[20] = {0};
    int sz = fread(head, 20, 1, f);
    fclose(f);
    if(sz!=1) {
        return 0;
    }
    head[7] = x64lib[7];
    head[16]&=0xfe;
    if(!memcmp(head, x86lib, 20))
        return 1;
    return 0;
}

int FileIsShell(const char* filename)
{
    FILE *f = fopen(filename, "rb");
    if(!f)
        return 0;
    char head[20] = {0};
    int sz = fread(head, strlen(bashsign2), 1, f);
    fclose(f);
    if(sz!=1)
        return 0;
    if(!strncmp(head, bashsign2, strlen(bashsign2)))
        return 1;
    if(!strncmp(head, bashsign, strlen(bashsign)))
        return 1;
    if(!strncmp(head, shsign, strlen(shsign)))
        return 1;
    return 0;
}

const char* GetTmpDir() {
    char *tmpdir;
    if ((tmpdir = getenv ("TMPDIR")) != NULL)               return tmpdir;
    if ((tmpdir = getenv ("TEMP")) != NULL)                 return tmpdir;
    if ((tmpdir = getenv ("TMP")) != NULL)                  return tmpdir;
    if(FileExist("/data/data/com.termux/files/usr/tmp", 0)) return "/data/data/com.termux/files/usr/tmp";
    if(FileExist("/tmp", 0))                                return "/tmp";
    if(FileExist("/var/tmp", 0))                            return "/var/tmp";
    if(FileExist("/usr/tmp", 0))                            return "/usr/tmp";

    return "/tmp";  // meh...
}

#if defined(RPI) || defined(RK3399) || defined(RK3326)
void sanitize_mojosetup_gtk_background()
{
    // get GTK2_RC_FILES folder
    const char* gtk2_rc = getenv("GTK2_RC_FILES");
    // check if $GTK2_RC_FILES/pixmaps/background.png exist
    char background[1000] = {0};
    strcpy(background, gtk2_rc);
    char* p = strrchr(background, '/'); // remove "/gtkrc"
    // every error will just silently abort
    if(!p)
        return;
    *p = 0;
    strcat(background, "/pixmaps/background.png");
    if(!FileExist(background, IS_FILE))
        return;
    // now open are read the header of the PNG to grab the width and height
    //very crude reading here!
    FILE* f = fopen(background, "rb");
    if(!f)
        return;
    char sign[8];
    if(fread(sign, 8, 1, f)!=1) {
        fclose(f); return;
    }
    const char ref[8] = {'\211', 'P', 'N', 'G', '\r', '\n', '\032', '\n' };
    if (memcmp(sign, ref, 8)) {
        fclose(f); return;
    }
    int32_t width, height;
    fseek(f, 16, SEEK_SET);
    if(fread(&width, sizeof(width), 1, f)!=1) {
        fclose(f); return;
    }
    if(fread(&height, sizeof(height), 1, f)!=1) {
        fclose(f); return;
    }
    fclose(f);
    // need to swap bitness!
    width = __builtin_bswap32(width);
    height = __builtin_bswap32(height);
    printf_log(LOG_INFO, "Mojosetup detected, size of background picture is %dx%d\n", width, height);
    if(width!=5000 || height!=3000)
        return; // not a background that will cause any issue
    // delete the file!
    f = fopen(background, "r+b");
    remove(background);
    printf_log(LOG_INFO, "background deleted!\n");
}
#endif
