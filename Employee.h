//
// Created by ryank on 3/14/23.
//

#ifndef EMPLOYEE_PAY_EMPLOYEE_H
#define EMPLOYEE_PAY_EMPLOYEE_H

struct Employee
{
    char name[50];
    double hourlyWage;
    int hoursWorked;
};

struct Employee* addEmployee(char name[50], double hourlyWage, int hoursWorked);
void calcPaycheck(struct Employee* employees[], int numEmployees);

#endif //EMPLOYEE_PAY_EMPLOYEE_H
