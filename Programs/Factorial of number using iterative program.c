//Program to calculate factorial of number using Iterative Manner

#include<stdio.h>
int fact(int n)
{
    int result = 1;
    while(n!=0)
    {
        result = result * n;
        n--;
    }
    return result;
}

int main()
{
    printf("%d", fact(6));
    return 0;
}