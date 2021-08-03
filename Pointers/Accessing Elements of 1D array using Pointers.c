#include<stdio.h>

int main()
{

    int arr[] = {1,3,4,5,6,7,8};
    int *ptr = &arr; //storing address of the first element in array in the ptr


    for(int i=0;i<7;i++) //accessing the elements of the array using ptr
        printf("%d ",*(ptr+i));  //here i represents the value to be added to the base address
    return 0;
}
