cmake_minimum_required(VERSION 3.13)
project(contact_book)

set(CMAKE_CXX_STANDARD 17)

add_executable(contact_book main.cpp Contact.cc Contact.hh ContactBook.cc ContactBook.hh)