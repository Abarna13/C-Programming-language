#include<stdio.h>
int main()
{
    int c = 78, d = 90;
    int *p, *q;
    p = &c;
    q = &d;
    *q = *p;
    printf("P is : %d", *p);
    printf("\nQ is : %d", *q);
}