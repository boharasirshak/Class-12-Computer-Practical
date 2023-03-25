// 19.Write a C program to demonstrate example of Nested Structure

#include <stdio.h>

struct student
{
    char name[20];
    int roll;
    float marks;
};

struct class
{
    char name[20];
    int roll;
    float marks;
    struct student s;
};

int main()
{
    struct class c;
    printf("Enter name, roll and marks of class: ");
    scanf("%s %d %f", c.name, &c.roll, &c.marks);
    printf("Enter name, roll and marks of student: ");
    scanf("%s %d %f", c.s.name, &c.s.roll, &c.s.marks);
    printf("Name: %s \t Roll: %d \t Marks: %f \n", c.name, c.roll, c.marks);
    printf("Name: %s \t Roll: %d \t Marks: %f \n", c.s.name, c.s.roll, c.s.marks);
    return 0;
}