cmake_minimum_required(VERSION 3.13)
project(magic)

set(CMAKE_CXX_STANDARD 17)

add_executable(magic main.cpp Player.cc Player.hh Color.hh Card.cc Card.hh Deck.cc Deck.hh)