// 15.WAP to copy the value of a variable into a file.

#include <stdio.h>

int main()
{
    FILE *fp;
    char buf[1024];

    printf("Enter some text: ");
    scanf("%s", buf);
    fp = fopen("15.txt", "w");
    fprintf(fp, "%s", buf);
    fclose(fp);
    return 0;
}
