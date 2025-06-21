cmake_minimum_required(VERSION 3.31)
project(libprg_trabalho C)

set(CMAKE_C_STANDARD 23)

add_executable(libprg_trabalho
        src/libprg/lista.c
        src/include/libprg/libprg_trabalho.h
        src/libprg/pilha.c
        src/libprg/libprg.c)

target_sources(libprg PUBLIC ${SOURCES})
target_include_directories(libprg PUBLIC ${CMAKE_CURRENT_LIST_DIR}/src/include)

target_compile_features(libprg PUBLIC c_std_17)

# https://cmake.org/cmake/help/latest/prop_tgt/AUTOGEN_TARGETS_FOLDER.html
source_group(
        TREE "${PROJECT_SOURCE_DIR}/libprg/src/include"
        PREFIX "Header Files"
        FILES ${HEADERS})

# https://cmake.org/cmake/help/latest/command/install.html
install(TARGETS libprg DESTINATION lib)
install(FILES ${HEADER_LIST} DESTINATION include)