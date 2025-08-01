#!/bin/bash

set -x

extract_pkg_auto() {
    # Example x86_64 package name: libcurl3-gnutls_7.74.0-1.3+deb11u7~bpo11+1_amd64.deb
    # Example x86 package name: libcurl3-gnutls_7.74.0-1.3+deb11u7~bpo11+1_i386.deb
    if echo "${1}" | grep -q -P ".deb$"; then
        echo "DEB (Debian) package detected."
        ar x "$(basename "${1}")"
        tar --extract --file data.tar*
    # Example x86_64 package name: curl-gnutls-8.1.2-44-1-x86_64.eopkg
    # Example x86 package name: curl-gnutls-32bit-8.1.2-44-1-x86_64.eopkg
    elif echo "${1}" | grep -q -P ".eopkg$"; then
        echo "EOPKG (Solus Linux) package detected."
        unzip -o "$(basename "${1}")"
        tar --extract --file install.tar.xz
    # Example x86_64 package name: bluez-libs-5.63-1.el8.x86_64.rpm
    # Example x86 package name: bluez-libs-5.63-1.el8.i686.rpm
    elif echo "${1}" | grep -q -P ".rpm$"; then
        echo "RPM (Fedora) detected."
        rpm2cpio "$(basename "${1}")" | cpio -idmv
    # Example x86_64 package name: libjpeg-turbo-3.0.1_1.x86_64.xbps
    # Example x86 package name: libjpeg-turbo-32bit-3.0.1_1.x86_64.xbps
    elif echo "${1}" | grep -q -P ".xbps$"; then
        echo "XBPS (Void Linux) package detected."
        tar --extract --file "$(basename "${1}")"
    else
        echo "Unsupported package type detected."
        exit 1
    fi
}

box64_dir=$(pwd)
dir_tmp_local="$(mktemp --directory)"
cd "${dir_tmp_local}"

for line in $(cat "${box64_dir}/box64-bundle-x86-libs.csv");
    do pkg_url="$(echo "${line}" | cut -d, -f1)"
    pkg_checksum_expected="$(echo "${line}" | cut -d, -f2)"
    pkg_name="$(basename "${pkg_url}")"
    if ! curl --silent --fail --location --remote-name "${pkg_url}"
        then echo "Failed to download ${pkg_url}"
        exit 1
    fi
    pkg_checksum_actual="$(sha256sum ${pkg_name} | awk '{print $1}')"
    if [[ "${pkg_checksum_expected}" -ne "${pkg_checksum_actual}" ]];
        then echo "Invalid checksum for ${pkg_name}"
        echo "Expected: ${pkg_checksum_expected}"
        echo "Actual: ${pkg_checksum_actual}"
        exit 1
    fi
    extract_pkg_auto "${pkg_name}"
done

# Start preperation of bundles.
mkdir -p \
  "${dir_tmp_local}/bundle-libs/usr/lib/box64-i386-linux-gnu" \
  "${dir_tmp_local}/bundle-libs/usr/lib/box64-x86_64-linux-gnu" \
  "${dir_tmp_local}/bundle-pkgs" \

# Copy Debian family libraries.
cp --archive "${dir_tmp_local}"/usr/lib/i386-linux-gnu/*.so* "${dir_tmp_local}/bundle-libs/usr/lib/box64-i386-linux-gnu"
cp --archive "${dir_tmp_local}"/usr/lib/x86_64-linux-gnu/*.so* "${dir_tmp_local}/bundle-libs/usr/lib/box64-x86_64-linux-gnu"
# Copy Fedora family libraries.
cp --archive "${dir_tmp_local}"/usr/lib/*.so* "${dir_tmp_local}/bundle-libs/usr/lib/box64-i386-linux-gnu"
cp --archive "${dir_tmp_local}"/usr/lib64/*.so* "${dir_tmp_local}/bundle-libs/usr/lib/box64-x86_64-linux-gnu"
## This location is used by a few special packages such as "glibc".
cp --archive "${dir_tmp_local}"/lib/*.so* "${dir_tmp_local}/bundle-libs/usr/lib/box64-i386-linux-gnu"
cp --archive "${dir_tmp_local}"/lib64/*.so* "${dir_tmp_local}/bundle-libs/usr/lib/box64-x86_64-linux-gnu"
# Copy Solus and Void Linux family libraries.
cp --archive "${dir_tmp_local}"/usr/lib32/*.so* "${dir_tmp_local}/bundle-libs/usr/lib/box64-i386-linux-gnu"

# Create "<LIBRARY_FILE>.so" symlinks.
for dir_lib in \
  "${dir_tmp_local}/bundle-libs/usr/lib/box64-i386-linux-gnu" \
  "${dir_tmp_local}/bundle-libs/usr/lib/box64-x86_64-linux-gnu"
    # If two or more libraries of the same name exist, this will symlink the oldest version.
    # Pipe this into a reverse sort `| sort -r` to symlink the newest version.
    do for lib in $(ls -1 "${dir_lib}")
        # Example output: libbluetooth.so
        do lib_base="$(echo "${lib}" | cut -d. -f1,2)"
        if ! ls "${dir_lib}/${lib_base}" 2> /dev/null
            then ln -s "${lib}" "${dir_lib}/${lib_base}"
        fi
    done
done

# Remove libraries that cannot be emulated.
# https://github.com/ptitSeb/box64/blob/v0.3.6/src/librarian/library.c#L433
for lib in libc.so libpthread.so librt.so libGL.so libGL.so libX11.so \
  libasound.so libdl.so libm.so libbsd.so libutil.so libresolv.so \
  libXxf86vm.so libXinerama.so libXrandr.so libXext.so libXfixes.so libXcursor.so \
  libXrender.so  libXft.so libXi.so libXss.so libXpm.so libXau.so libXdmcp.so \
  libX11-xcb.so libxcb.so libxcb-xfixes.so libxcb-shape.so libxcb-shm.so libxcb-randr.so \
  libxcb-image.so libxcb-keysyms.so libxcb-xtest.so libxcb-glx.so libxcb-dri2.so libxcb-dri3.so \
  libXtst.so libXt.so libXcomposite.so libXdamage.so libXmu.so libxkbcommon.so \
  libxkbcommon-x11.so libpulse-simple.so libpulse.so libvulkan.so libvulkan.so \
  ld-linux-x86-64.so crashhandler.so libtcmalloc_minimal.so libtcmalloc_minimal.so libanl.so \
  ld-linux.so ld-linux.so libthread_db.so
    do find "${dir_tmp_local}" -name "${lib}"* -delete
done

mv "${dir_tmp_local}"/*.deb "${dir_tmp_local}/bundle-pkgs/"
mv "${dir_tmp_local}"/*.eopkg "${dir_tmp_local}/bundle-pkgs/"
mv "${dir_tmp_local}"/*.rpm "${dir_tmp_local}/bundle-pkgs/"
mv "${dir_tmp_local}"/*.xbps "${dir_tmp_local}/bundle-pkgs/"

tar --directory "${dir_tmp_local}/bundle-libs" --create --file "${box64_dir}/box64-bundle-x86-libs.tar.gz" .
tar --directory "${dir_tmp_local}/bundle-pkgs" --create --file "${box64_dir}/box64-bundle-x86-pkgs.tar.gz" .

# Clean up.
cd -
rm -r -f "${dir_tmp_local}"
