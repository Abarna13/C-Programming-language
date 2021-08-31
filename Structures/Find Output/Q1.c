#include<stdio.h>

struct point
{
    int x,y,z;
};


int main()
{
    struct point p1 = {.y=7, .z = 5, .x = 2};
    printf("x is : %d", p1.x);
    printf("\ny is : %d", p1.y);
    printf("\nz is : %d", p1.z);
}


/*
Output:

x is : 2
y is : 5
z is : 7

*/
