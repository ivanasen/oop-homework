cmake_minimum_required(VERSION 3.13)
project(Songs)

set(CMAKE_CXX_STANDARD 17)

add_executable(Songs main.cpp Song.cc Song.hh Album.cc Album.hh)