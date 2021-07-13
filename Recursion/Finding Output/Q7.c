/*Question:
The Return value of fun(5) is 
*/


#include<stdio.h>

int fun(int n)
{
    int x = 1,k;
    if(n==1)
    {
        return x;
    }
    for(k=1;k<n;k++)
    {
        x = x+fun(k)*fun(n-k);
    }
    return x;
}

/*
Output:

51

*/


