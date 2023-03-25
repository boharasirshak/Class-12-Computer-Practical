// Write a C Program to copy content of one File into another File

#include <stdio.h>


int main()
{
    FILE *f1, *f2;
    char buff[1024];

    f1 = fopen("22_1.txt", "r");
    f2 = fopen("22_2.txt", "w");

    while(fgets(buff, 1024, f1) != NULL)
    {
        fputs(buff, f2);
    }

    fclose(f1);
    fclose(f2);
    return 0;
}