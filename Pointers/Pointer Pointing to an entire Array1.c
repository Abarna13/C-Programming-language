#include <stdio.h>

int main()
{
    int a[][3] = {1,2,3,4,5,6};
    int (*ptr) [3] = a;
    printf("%d %d", (*ptr)[1], (*ptr)[2]);
    ++ptr;
    printf("\n%d %d", (*ptr)[1], (*ptr)[2]);
}
