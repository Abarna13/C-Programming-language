
#include<stdio.h>
int main()
{

    int a[] = {7,9,58,39,57};
    int *p = &a[4];
    printf("%d ", *(--p));
    printf("\n%d ", *(p--));
}
