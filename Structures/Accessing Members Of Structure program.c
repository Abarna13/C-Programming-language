#include<stdio.h>

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
    book.title = "Alchemist";
    book.author = "Paulo Coelho";
    book.num_pages = 197;
    book.price = 45;

    printf("\nBook title is : %s", book.title);
    printf("\nBook Author is : %s", book.author);
    printf("\nNumber of Pages : %d", book.num_pages);
    printf("\nBook Price is : %.f", book.price);
}
