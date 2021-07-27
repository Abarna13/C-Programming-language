#include<stdio.h>
int main()
{
    int a = 10;
    int *ptr;       //pointer declaration
    ptr = &a;      //pointer initialization
    printf("%d", *ptr);
    printf("\nValue of a is : %d", a);
    return 0;
}



