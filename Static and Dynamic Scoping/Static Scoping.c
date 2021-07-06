//Program for static scoping

#include<stdio.h>

int fun1(int);
int fun2(int);
int a=5;
int main()
{
    int a = 10;
    a = fun1(a);
    printf("%d", a);
}

int fun1(int b)
{
    b = b + 10;
    b = fun2(b);;
    return b;
    
}

int fun2(int b)
{
    int c;
    c = a+b;
    return c;
}