//Static Scoping Program

#include<stdio.h>

int x = 50;

int fun2()
{
    return x;
}

int fun1()
{
    int x = 10;
    int y = fun2();
    return y;
}

int main()
{
    printf("%d", fun1());
}