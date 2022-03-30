cmake_minimum_required(VERSION 3.21)
project(HerenciaPolmorfismoEmpleados)

set(CMAKE_CXX_STANDARD 14)

add_executable(HerenciaPolmorfismoEmpleados main.cpp Employee.cpp Employee.h SalariedEmployee.cpp SalariedEmployee.h CommissionEmployee.cpp CommissionEmployee.h HourlyEmployee.cpp HourlyEmployee.h BasePlusCommissionEmployee.cpp BasePlusCommissionEmployee.h DailyEmployee.cpp DailyEmployee.h)
