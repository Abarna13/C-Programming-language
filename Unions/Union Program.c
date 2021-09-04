/*Important:

In union members will share same memory location.If we make changes in one member then it will be reflected to the another member as well.

*/


#include<stdio.h>
union abc
{
    int a;
    char b;
}var;


int main()
{
    var.a = 65;
    printf("a = %d\n", var.a);
    printf("b = %d\n", var.b);  //Same memory location is shared with a and b so b is 65
    printf("c = %c\n", var.b);  //It will print the character in ASCII of b so b = A
}
