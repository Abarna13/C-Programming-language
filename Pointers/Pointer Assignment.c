#include<stdio.h>
int main()
{
    int u = 78;
    int *p, *q;
    p = &u;
    q = p;
    printf("P is : %d", *p);
    printf("\nQ is : %d", *q);
}