cmake_minimum_required(VERSION 3.25)
project(S_ALG_01_Longest_Consecutive_Sequence C)

set(CMAKE_C_STANDARD 11)

add_executable(S_ALG_01_Longest_Consecutive_Sequence
        main.c sort.c sort.h lcs.c lcs.h main.h)
