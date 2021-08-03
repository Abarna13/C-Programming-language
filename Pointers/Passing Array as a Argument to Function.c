#include<stdio.h>
int add(int b[], int len) //here int b[] is int*b
{

    int sum = 0, i;
    for(i=0;i<len;i++)
        sum = sum + b[i];
    return sum;

}

int main()
{
    int a[] = {6,3,2,4};
    int len = sizeof(a) / sizeof(a[0]);  //len = 16/4 = 4
    printf("length is : %d", len);
    printf("The sum is : %d", add(a, len)); //A is Array and it is passed  to argument to function as int b[] and in (a) we are not passing whole array just passing the base address of array -> a[0]
    return 0;
}
