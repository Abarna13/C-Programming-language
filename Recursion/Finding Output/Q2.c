//Program of Non-tail recursive function

#include<stdio.h>

void fun2(int n)
{
    if(n == 0)
    {
        return;
    }
    else
    {
        fun2(n/2);
    }
    
    printf("%d", n%2);
}

int main()
{
    fun2(3);
    return 0;
}

/*
Output:

11

*/


