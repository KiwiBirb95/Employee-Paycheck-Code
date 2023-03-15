#include "stdlib.h"
#include "Employee.h"

int main() {
    // Create an array of pointers to Employee structs
    struct Employee* employees[3];

    // Add some employees to the array
    employees[0] = addEmployee("John Smith", 10.0, 40);
    employees[1] = addEmployee("Jane Doe", 15.0, 35);
    employees[2] = addEmployee("Bob Johnson", 12.5, 50);

    // Calculate paychecks for the employees and print out the results
    calcPaycheck(employees, 3);

    // Free the memory allocated for the Employee structs
    for(int i = 0; i < 3; i++)
    {
        free(employees[i]);
    }

    return 0;
}