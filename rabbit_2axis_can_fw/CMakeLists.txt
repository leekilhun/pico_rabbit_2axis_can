cmake_minimum_required(VERSION 3.12)

set(PRJ_NAME rabbit_2axis_can_fw)

set(PICO_SDK_PATH $ENV{PICO_SDK_PATH})

set(PICO_BOARD_HEADER_DIRS "${CMAKE_SOURCE_DIR}/src/bsp/board")

include(${PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(${PRJ_NAME}
 C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Initialize the SDK
pico_sdk_init()

add_subdirectory(src)

add_compile_options(-Wall
        -Wno-format          # int != int32_t as far as the compiler is concerned because gcc has int32_t as long int
        -Wno-unused-function # we have some for the docs that aren't called
        -Wno-maybe-uninitialized 
        )
