/*

Designated Initialization

The Designated Initialization allows structure members to be initialized in any order.

*/


#include<stdio.h>

struct abc
{
    int x;
    int y;
    int z;
};


int main()
{

    struct abc a = {.y = 60, .z = 40, .x = 20};  //a can access all the three members x,y,z.
    printf("%d %d %d", a.x, a.y, a.z);
}
