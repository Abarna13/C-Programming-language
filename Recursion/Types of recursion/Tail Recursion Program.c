/* Tail Recursion:

A recursive function is said to be a tail recursive if the recursive call is the last thing done by the function . And there is no need to keep record of the previous state.

*/


//Program for Tail-Recursion

#include<stdio.h>

void fun(int n)
{
    if(n==0)
    {
        return;
    }
    else
    {
        printf("%d", n);
    }
    return fun(n-1); //Its a recursive call its done by tail recursion
}

int main()
{
    fun(3);
    return 0;
}

