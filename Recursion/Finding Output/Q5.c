/*
QUESTION:

Determine how many times the star will be printed on the Screen?

*/

#include<stdio.h>

void fun1(int n) //input of n is not given so we can assume                   any number
{
    int i = 0;
    if(n > 1)
    {
        fun1(n-1);
    }
    for(i=0;i<n;i++)
    {
        printf(" * ");
    }
}


/*
Output:

n(n+1)/2

*/