/*

Fact 3 : Only integral values are allowed.

*/



#include<stdio.h>

int main()
{
    enum point{a=67.4,b=8,c=4};
    printf("a = %d\nb = %d\nc = %d", a, b, c);
}


/*
Output :

Error
Enumeration of a is not a integer constant

*/

