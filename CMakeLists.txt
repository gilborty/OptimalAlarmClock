cmake_minimum_required (VERSION 2.6)
project(OptimalAlarmClock)

set(CMAKE_CXX_FLAGS -std=c++11)

SET (SRCS src/main.cpp
          src/AlarmClock.cpp)

add_executable(OptimalAlarmClock ${SRCS})

