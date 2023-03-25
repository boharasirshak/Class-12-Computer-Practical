// 16.Write a C program to demonstrate example of structure of array

#include <stdio.h>

struct student
{
    char name[20];
    int roll;
    float marks;
};

int main()
{
    struct student s[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter name, roll and marks of student: ");
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s \t Roll: %d \t Marks: %f \n", s[i].name, s[i].roll, s[i].marks);
    }
    return 0;
}