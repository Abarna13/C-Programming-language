#include<stdio.h>
int main()
{

    int a[] = {1,3,7,8,9,78,94};
    int *findMid();
    int n = sizeof(a) / sizeof(a[0]);
    int *mid = findMid(a, n);
    printf("Middle value of array is : %d", *mid);
    return 0;

}

int *findMid(int a[], int n)
{

    return &a[n/2];
}
