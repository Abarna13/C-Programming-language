
#include<stdio.h>
int main()
{
    int a[] = {8,9,67,45,34};
    int *p;
    p = &a;
    
    printf("Size of Integer : %d", sizeof(int));
    printf("\nSize of a is : %d", sizeof(a));
    printf("\nLength of a is : %d", sizeof(a)/sizeof(int));
    
   
    ++p;//Pre-increment
    printf("\nValue of P is : %d", p);
    printf("\nValue of *P is : %d", *p);
    printf("\nValue of *P is : %d", ++*p); 
    printf("\nValue of P is : %d", *++p);
   
}