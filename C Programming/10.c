// WAP to take data of five different books using the array of structure in the above program of Question No. 1

#include <stdio.h>

struct Book
{
    int bookid;
    char bookname[32];
    int bookpages;
    char bookauthor[32];
};

int main()
{
    struct Book book[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter bookid: ");
        scanf("%d", &book[i].bookid);
        printf("Enter bookname: ");
        scanf("%s", book[i].bookname);
        printf("Enter bookpages: ");
        scanf("%d", &book[i].bookpages);
        printf("Enter bookauthor: ");
        scanf("%s", book[i].bookauthor);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Bookid: %d Bookname: %s Bookpages: %d Bookauthor: %s \r ", book[i].bookid, book[i].bookname, book[i].bookpages, book[i].bookauthor);
    }
    return 0;
}