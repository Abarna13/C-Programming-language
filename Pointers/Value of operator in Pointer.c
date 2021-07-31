#include<stdio.h>
int main()
{
    int f = 7;
    int *ptr;
    ptr = &f;
    printf("ptr is : %d", *ptr);
}