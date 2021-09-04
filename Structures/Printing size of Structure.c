#include<stdio.h>

#pragma pack(1)

struct store
{
    double price;
    char *title;
    char *author;
    int num_pages;
    int colour;
    int size;
    char *design;

};


int main()
{
    struct store book;
    printf("%ld bytes", sizeof(book));
}
