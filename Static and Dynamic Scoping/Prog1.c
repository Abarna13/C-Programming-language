#include<stdio.h>
int main()
{
    int a = 16;
    a = fun1(a);
    printf("%d", a);

}

int fun1(int a)
{
    int b = 5;
    b = b+a;
    return b;
}