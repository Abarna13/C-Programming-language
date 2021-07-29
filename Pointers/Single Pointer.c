#include<stdio.h>
int main()
{
    int a = 67;
    int *p;
    p = &a; //Address of A will be stored in p
    printf("Value of a is : %d", a);
    printf("\nAddress of a is : %d", &a);
    printf("\nValue of p is : %d", p);
    printf("\nAddress of p is : %d", &p);
    printf("\nDeferencing P is : %d", *p);//The value of A will be stored in the *p

}