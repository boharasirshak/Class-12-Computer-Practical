// 17.Write a C program to declare, initialize an union, example of union

#include <stdio.h>

union student
{
    char name[20];
    int roll;
    float marks;
};

int main()
{
    union student s;
    printf("Enter name, roll and marks of student: ");
    scanf("%s %d %f", s.name, &s.roll, &s.marks);
    printf("Name: %s \t Roll: %d \t Marks: %f \n", s.name, s.roll, s.marks);
    return 0;
}