//Program of Non-tail Recursive function:

#include<stdio.h>

void fun2(int n)
{
    if(n <= 0)
    {
        return;
        
    }
    printf("%d", n);
    fun2(2*n);
    printf("%d", n);
}




