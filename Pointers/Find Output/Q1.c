#include<stdio.h>
int main()
{
    int i = 1;
    int *q, *p;
    p = &i;
    q = p;
    *q = 5;
    printf("Value of i is : %d ", i);
    printf("\nP is : %d", *p);
    printf("\nQ is : %d", *q);
    
}
    
/*
Output:

Value of i is : 5 
P is : 5
Q is : 5

*/