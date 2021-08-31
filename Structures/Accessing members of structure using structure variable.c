#include<stdio.h>
struct abc
{

    int x;
    int y;
};

int main()
{
    struct abc a = {9,6};
    struct abc *ptr = &a;

    printf("%d %d", a.x, a.y);

}
