//
// Created by ryank on 3/14/23.
//
#include <stdio.h>
#include "Employee.h"

void calcPaycheck(struct Employee* employees[], int numEmployees)
{
    double totalPay = 0.0;
    for(int i = 0; i < numEmployees; i++)
    {
        struct Employee* emp = employees[i];
        double pay = emp->hourlyWage * emp->hoursWorked;
        printf("%s, wage %.2f, hours %d, total pay: $%.2f\n", emp->name, emp->hourlyWage, emp->hoursWorked, pay);
        totalPay += pay;
    }

    double avgPay = (numEmployees > 0) ? totalPay / numEmployees : 0.0;
    printf("Total pay: $%.2f\n", totalPay);
    printf("Average pay: $%.2f\n", avgPay);

}