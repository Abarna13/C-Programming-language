#include<stdio.h>
int main()
{
    int a, b, temp;
    a = 50;
    b = 100;
    temp = a;
    a = b;
    b = temp;
    printf("After Swapping a and b is : %d %d", a, b);
    return 0;
   
}