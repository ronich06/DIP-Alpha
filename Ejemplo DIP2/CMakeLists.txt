cmake_minimum_required(VERSION 3.17)
project(Ejemplo_DIP2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ejemplo_DIP2 main.cpp Johnson.h Johnson.cpp Hospital.h Hospital.cpp IVaccination.h Moderna.h Moderna.cpp PfizerBioNTech.h PfizerBioNTech.cpp)