# Cross-compilation settings for 32-bit MinGW
set(CMAKE_SYSTEM_NAME Windows)
set(CMAKE_SYSTEM_PROCESSOR i686)

# Specify the cross-compiler
set(CMAKE_C_COMPILER i686-w64-mingw32-gcc)
set(CMAKE_CXX_COMPILER i686-w64-mingw32-g++)
set(CMAKE_RC_COMPILER i686-w64-mingw32-windres)
set(CMAKE_MC_COMPILER i686-w64-mingw32-windmc)

# Specify the Fortran compiler, archiver, and ranlib (if needed)
set(CMAKE_Fortran_COMPILER i686-w64-mingw32-gfortran)
set(CMAKE_AR i686-w64-mingw32-ar)
set(CMAKE_RANLIB i686-w64-mingw32-ranlib)

# Set the target environment path
set(CMAKE_FIND_ROOT_PATH /usr/i686-w64-mingw32)

# Search modes for programs, libraries, and headers
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)

# Qt-specific settings (if you are using Qt)
set(QT_BINARY_DIR /usr/i686-w64-mingw32/bin /usr/bin)
set(QT_INCLUDE_DIRS_NO_SYSTEM ON)
set(QT_HOST_PATH "/usr" CACHE PATH "host path for Qt")

# Boost settings (specific for mingw-w64)
set(Boost_THREADAPI win32)