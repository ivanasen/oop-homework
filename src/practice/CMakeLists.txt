cmake_minimum_required(VERSION 3.14)
project(practice)

set(CMAKE_CXX_STANDARD 17)

add_executable(practice main.cpp RunningAverage.h Sequence.h ConstantSequence.h ArithmeticProgression.h Fibonacci.h File.cpp File.h TextFile.cpp TextFile.h Directory.cpp Directory.h)