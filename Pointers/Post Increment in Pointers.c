#include<stdio.h>
int main()
{

    int arr[] = {5,7,8,90,56,89};
    int *p = &arr[0];
    printf("%d ", *(p++));
    printf("\n%d ", *p);
    return 0;
}
