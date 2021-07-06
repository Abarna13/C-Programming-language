#include<stdio.h>

static int i;
static int i = 56;
static int i;
int main()
{
    static int i;
    printf("%d", i);
    return 0;
}

/* Output 

0

*/