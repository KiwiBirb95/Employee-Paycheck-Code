cmake_minimum_required(VERSION 3.24)
project(Employee_pay C)

set(CMAKE_C_STANDARD 11)

add_executable(Employee_pay main.c Employee.h AddEmployee.c CalcPaycheck.c)
