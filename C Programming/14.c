// 14.WAP to copy the text from the file to a variable.

#include <stdio.h>

int main()
{
    char buf[1024];

    FILE *fp = fopen("14.txt", "r");
    if (fp == NULL)
    {
        printf("File not found");
        return 0;
    }
    while (fgets(buf, 1024, fp) != NULL)
    {
        printf("%s", buf);
    }
    fclose(fp);
    return 0;
}