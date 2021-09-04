#include<stdio.h>

#pragma pack(1)

struct store
{
    double price;
    union
    {
        struct
        {
            char *title;
            char *author;
            int num_pages;
        }book;

        struct
        {
            int size;
            int color;
            char *design;
        }tshirt;
    }item;
};


int main()
{
    struct store s;
    s.item.book.title = "The Alchemist";
    s.item.book.author = "Paulo Coelho";
    s.item.book.num_pages = 189;
    printf("Title of Book is : %s", s.item.book.title);
    printf("\nSize is : %ld", sizeof(s));
}
