// Write a C Program to create a File & write Data in it

#include <stdio.h>

int main()
{
    FILE *fp;
    char buff[1024];
    fp = fopen("23.txt", "w");
    printf("Enter data to write in file: ");
    scanf("%s", buff);
    fputs(buff, fp);
    fclose(fp);
    return 0;
}