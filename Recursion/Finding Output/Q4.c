/* Question:
If get(6) function is being called in main() then how many times will the get() function be invoked before it is returning to the main()?

*/



#include<stdio.h>

void get(int n)
{
    if(n<1)
    {
        return;
    }
    get(n-1);
    get(n-3);
    printf("%d ", n);
}

/*
Output:

25

*/



