cmake_minimum_required(VERSION 3.13)
project(xfat)

set(CMAKE_CXX_STANDARD 14)

add_executable(xfat main.c xtypes.h xdisk.h xdisk.c driver.c)
