#include<stdio.h>
char fun()
{
    return 'v';
}

int main()
{
    char c = fun();
    printf("character is: %c", c);
}