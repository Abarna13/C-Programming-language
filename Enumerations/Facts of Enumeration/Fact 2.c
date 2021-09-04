/*

Fact 2 : we can assign values in any order.All unassigned names will get value as value of previous name+1.

*/


#include<stdio.h>

int main()
{
    enum point{b=67,c=45,d,a=34}; //here t is unassigned names
    printf("c = %d\nd = %d\na = %d\nb = %d", c, d, a, b);
}

