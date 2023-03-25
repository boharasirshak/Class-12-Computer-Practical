// 12.WAP to write the text in a file and read the text from a file.

#include <stdio.h>

int main()
{
    char text[512];
    char txt2[512];

    printf("Enter something: ");
    scanf("%s", text);

    FILE *fp = fopen("12.txt", "w+");
    if (fp == NULL)
    {
        printf("Error opening the file \n");
        return 1;
    }
    if (fputs(text, fp) == EOF)
    {
        printf("Error while writing to file \n");
    }
    rewind(fp);
    fgets(txt2, 512, fp);
    printf("You entered: %s", txt2);
    fclose(fp);
    return 0;
}