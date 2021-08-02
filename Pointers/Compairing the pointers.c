
#include<stdio.h>
int main()
{

    int a[] = {7,8,4,3,7,9,78};
    int *p = &a[2];
    int *q = &a[6];
    printf("Is P is Greater than Q : %d", p>=q);
    printf("\nIs P is lesser than Q : %d", p<=q);
    q = &a[2];
    printf("\nIs P is equal to Q : %d", p==q);
    return 0;
}
