// 18.Write a C program to demonstrate example structure pointer (structure with pointer) using user defined function

#include <stdio.h>

struct student
{
    char name[20];
    int roll;
    float marks;
};

void take_input(struct student *s)
{
    printf("Enter name, roll and marks of student: ");
    scanf("%s %d %f", s->name, &s->roll, &s->marks);
}

void display(struct student *s)
{
    printf("Name: %s \t Roll: %d \t Marks: %f \n", s->name, s->roll, s->marks);
}

int main()
{
    struct student s;
    take_input(&s);
    display(&s);
    return 0;
}