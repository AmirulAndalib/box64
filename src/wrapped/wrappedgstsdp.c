#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <dlfcn.h>

#include "wrappedlibs.h"

#include "debug.h"
#include "wrapper.h"
#include "bridge.h"
#include "librarian/library_private.h"
#include "x64emu.h"

const char* gstsdpName = "libgstsdp-1.0.so.0";
#define ALTNAME "libgstsdp-1.0.so"

#define LIBNAME gstsdp

#define PRE_INIT    \
    if(BOX64ENV(nogtk)) \
        return -1;

#include "wrappedlib_init.h"
