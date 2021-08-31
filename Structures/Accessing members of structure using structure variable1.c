#include<stdio.h>
struct abc
{

    int x;
    int y;
};

int main()
{
    struct abc a = {8,6};
    struct abc *ptr = &a;

    printf("x is : %d \ny is : %d", ptr->x, ptr->y);

}
