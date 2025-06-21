cmake_minimum_required(VERSION 3.31)
project(libprg_trabalho C)

set(CMAKE_C_STANDARD 23)

add_executable(libprg_trabalho
        src/libprg/lista.c
        src/include/libprg/libprg_trabalho.h
        src/libprg/pilha.c
        src/libprg/libprg.c)
