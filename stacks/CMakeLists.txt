cmake_minimum_required(VERSION 3.30)
project(stacks)

set(CMAKE_CXX_STANDARD 20)

add_executable(stacks main.cpp
        MyVector.h
        MyStack1.h
        MyLinkedList.h
        MyStack2.h)
