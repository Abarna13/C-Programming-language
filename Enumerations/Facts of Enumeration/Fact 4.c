/*

Fact 4 : All Enum constant must be unique in their scope.

*/


#include<stdio.h>

int main()
{
    enum point1{a=2,b=9,c=0};
    enum point2{a=7,g=8,j=4};
    printf("%d %d %d %d %d, a, b, c, g, j);
}


/*
Output:

Error

Redeclaration of enumerator a

*/

