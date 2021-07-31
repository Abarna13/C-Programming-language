#include<stdio.h>
int main()
{
    int u = 7, v = 90;
    int *p, *q;
    p = &u;
    q = &v;
    *p = *q;
    printf("P is : %d", *p);
    printf("\nQ is : %d", *q);
}