/*

Fact 1 : Two or more names can have a same value.

*/

#include<stdio.h>

int main()
{
    enum point{a=0,b=0,c=0};
    printf("a = %d\nb = %d\nc = %d", a, b, c);
}
