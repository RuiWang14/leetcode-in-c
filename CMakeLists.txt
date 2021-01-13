cmake_minimum_required(VERSION 3.15)
project(leetcode C)

set(CMAKE_C_STANDARD 99)

add_executable(main main.c)
add_executable(two_sum_double_loop 1/two_sum_double_loop.c)
add_executable(6_3_reverse "c pointer/6_3_reverse.c")
add_executable(7_1_Hermite "c pointer/7_1_Hermite.c")
add_executable(7_3_ascii_to_integer "c pointer/7_3_ascii_to_integer.c")
add_executable(8_5_matrix "c pointer/8_5_matrix.c")