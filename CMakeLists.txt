cmake_minimum_required(VERSION 3.5)

project(Marky VERSION 0.0.1 LANGUAGES CXX)

set(INCLUDE_DIR include)
set(SOURCE_DIR src)

add_library(marky_file 
    ${SOURCE_DIR}/MarkyFile.cpp
)
target_include_directories(marky_file PRIVATE
    ${INCLUDE_DIR}
)

add_executable(markyhtml
    ${SOURCE_DIR}/main.cpp
)
target_include_directories(markyhtml PRIVATE
    ${INCLUDE_DIR}
)