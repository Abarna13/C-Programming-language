#include<stdio.h>

static int i;
static int i = 56;
static int i;
int main()
{
    printf("%d", i);
    return 0;
}

/*
output:

56

*/
