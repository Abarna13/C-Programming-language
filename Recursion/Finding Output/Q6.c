/*
Question:

which one of the following is true?

i)The function return 0 for all values of j
ii)The function prints the string "something" for all values of j
iii)The function returns 0 when j = 50
iv)the function will exhaust the run time stack or run into an infinite loop when j = 50

*/

#include<stdio.h>

int f(int j)
{
    static int i = 50;
    int k;
    if(i==j)
    {
        printf("something");
        k = f(i);
        return 0;
    }
    else
    {
        return 0;
    }
}

/*
Answer:

The function will exhaust the run time stack or run into an infinite loop when j = 50

*/


