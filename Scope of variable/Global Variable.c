#include<stdio.h>
int fun();

int var = 10;
int main()
{
    int var = 3;
    printf("%d\n", var);
    fun();
    return 0;
}

int fun()
{
    printf("%d", var);
}
