cmake_minimum_required(VERSION 3.25)
project(C_CAN C)

set(CMAKE_C_STANDARD 11)

add_executable(C_CAN main.c waveshare.c waveshare.h mia_frames.h)
