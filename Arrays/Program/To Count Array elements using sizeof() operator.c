//Program for Count No of elements in array using sizeof() operator

#include<stdio.h>
int main()
{
    int a[] = {12,45,67,89,90,99,8,66,55,4433,22,11,00,64,34,23,78,79,10,7,6,5,4,3,2,1,98};
    int elements;
    elements = sizeof(a) / sizeof(a[0]);
    printf("Count no of elements in Array : %d",elements);
}