{pkgs}: {
  deps = [
    pkgs.gradle
    pkgs.android-tools
    pkgs.binutils
    pkgs.lld
    pkgs.gtk3
    pkgs.curl
    pkgs.pkg-config
    pkgs.libtool
    pkgs.automake
    pkgs.autoconf
    pkgs.clang-tools
    pkgs.clang
    pkgs.ninja
    pkgs.cmake
  ];
}
