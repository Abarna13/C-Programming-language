//Program for Function Definition

//Addition of two numbers


#include<stdio.h>
int addition(int, int);

int main()
{
    int m = 40, n = 20, sum;
    sum = addition(m,n);
    printf("Sum of two numbers is : %d", sum);
}

int addition(int a, int b)
{
    return(a + b);
}