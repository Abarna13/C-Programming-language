#include<stdio.h>
int main()
{
    int a = 90;
    int *p,*y;

    p = &a;
    y = p + 1;
    printf("Size of Integer is : %d", sizeof(a));
    printf("\nP Value : %d", p); //Address of A will be stored in P
    printf("\nY Value : %d", y);
    
    

}