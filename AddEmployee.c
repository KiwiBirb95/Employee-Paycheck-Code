//
// Created by ryank on 3/14/23.
//
#include <stdlib.h>
#include <string.h>
#include "Employee.h"

struct Employee* addEmployee(char name[50], double hourlyWage, int hoursWorked)
{
    struct Employee* emp = (struct Employee*) malloc(sizeof (struct Employee));
    strcpy(emp->name, name);
    emp->hoursWorked = hoursWorked;
    emp->hourlyWage = hourlyWage;
    return emp;
}