#include<stdio.h>
int main()
{
    int a = 67,*p;
    int **q; //Double pointer

    p = &a; //Address of A will be stored in p
    printf("Value of a is : %d", a);
    printf("\nAddress of a is : %d", &a);
    printf("\nValue of p is : %d", p);
    printf("\nAddress of p is : %d", &p);
    printf("\nDeferencing *P is : %d", *p);//The value of A will be stored in the *p
    printf("\n-------------------------------------------------");

    q = &p;
    printf("\nValue of p is : %d", p);
    printf("\nAddress of p is : %d", &p);
    printf("\nValue of q is : %d", q);
    printf("\nAddress of q is : %d", &q);
    printf("\nDeferencing **Q is : %d", **q);


}