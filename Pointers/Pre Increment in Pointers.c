
#include<stdio.h>
int main()
{

    int a[] = {7,9,5,3,57};
    int *p = &a[0];
    printf("%d ", *(++p));
    printf("\n%d ", *p);
}
