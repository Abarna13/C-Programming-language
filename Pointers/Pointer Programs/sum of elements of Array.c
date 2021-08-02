#include<stdio.h>
int main()
{

    int a[] = {8,90,56,34,6};
    int sum = 0;
    int *p;

    for(p = a;p<= a+4;p++) //In here a means a[0] and a+4 means a[0+4] = a[4]
        sum = sum + *p;

    printf("Sum is : %d", sum);

}
