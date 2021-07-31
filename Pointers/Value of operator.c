#include<stdio.h>
int main()
{
    int f = 7;
    int *ptr;
    ptr = &f;
    *ptr = 23;
    printf("ptr is : %d", *ptr);
}