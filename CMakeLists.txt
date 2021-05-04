cmake_minimum_required(VERSION 3.19)
project(dsh)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(dsh
        src/character.cpp
        src/character.h
        src/race.h
        src/utest.cpp src/job.cpp src/job.h src/race.cpp)
