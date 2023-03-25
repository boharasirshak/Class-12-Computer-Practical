// 20. Write a C program to read and print an employee's details (ename, eid, eaddress, esalary) using structure

#include <stdio.h>

struct employee
{
    char name[20];
    int eid;
    char eaddress[20];
    float esalary;
};

int main()
{
    struct employee e;
    printf("Enter name, id, address and salary of employee: ");
    scanf("%s %d %s %f", e.name, &e.eid, e.eaddress, &e.esalary);
    printf("Name: %s \t ID: %d \t Address: %s \t Salary: %f \n", e.name, e.eid, e.eaddress, e.esalary);
    return 0;
}
