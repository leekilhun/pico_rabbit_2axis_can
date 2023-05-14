cmake_minimum_required(VERSION 3.12)

set(PRJ_NAME led_blink)
set(PICO_SDK_PATH $ENV{PICO_SDK_PATH})

# Set the C compiler path
set(CMAKE_C_COMPILER "C:/tools/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc")

# Set the C++ compiler path
set(CMAKE_C_COMPILER "C:/tools/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-g++")


# Pull in SDK (must be before project)
include(pico_sdk_import.cmake)

project(${PRJ_NAME}
 C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

if (PICO_SDK_VERSION_STRING VERSION_LESS "1.3.0")
    message(FATAL_ERROR "Raspberry Pi Pico SDK version 1.3.0 (or later) required. Your version is ${PICO_SDK_VERSION_STRING}")
endif()

# Initialize the SDK
pico_sdk_init()

# Add my project
add_subdirectory(src)

add_compile_options(-Wall
        -Wno-format          # int != int32_t as far as the compiler is concerned because gcc has int32_t as long int
        -Wno-unused-function # we have some for the docs that aren't called
        -Wno-maybe-uninitialized
        )

# Hardware-specific examples in subdirectories:
