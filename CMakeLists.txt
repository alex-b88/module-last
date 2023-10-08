cmake_minimum_required(VERSION 3.26)
project(ModuleLast)

set(CMAKE_CXX_STANDARD 17)

add_executable(ModuleLast main.cpp
        includes.h
        task1/MemoryBlock.cpp
        task1/MemoryBlock.h
        task1/Cell.cpp
        task1/Cell.h
        task2/Student.cpp
        task2/Student.h
        task2/Spisok.cpp
        task2/Spisok.h
        task3/Order.cpp
        task3/Order.h
        task3/DT.h
        task3/DT.cpp
        task3/InsuredOrder.cpp
        task3/Exeption.cpp
        task3/Exeption.h
        task3/ExpressOrder.cpp
        task3/OrdinaryOrder.cpp
        task3/DeliverySystem.cpp
        task3/DeliverySystem.h)
