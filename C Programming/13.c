// 13.WAP to enter name, age, address of 5 students in a file.

#include <stdio.h>

struct Student
{
    char name[32];
    int age;
    char address[64];
};

void take_input(struct Student s[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
        printf("Enter address: ");
        scanf("%s", s[i].address);
    }
}

void write_to_file(struct Student s[], int size)
{
    FILE *fp = fopen("13.txt", "w+");
    if (fp == NULL)
    {
        printf("Error opening the file \n");
        return;
    }
    for(int i = 0; i < size; i++)
    {
        fprintf(fp, "%s %d %s \n", s[i].name, s[i].age, s[i].address);
    }
    fclose(fp);
}

int main()
{
    struct Student students[5];
    take_input(students, 5);
    write_to_file(students, 5);
    return 0;
}