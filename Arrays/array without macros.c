#include<stdio.h>
int main()
{
    int a[10], i;
    for(i=0;i<10;i++)
    {
        printf("Enter the input for index %d : ", i);
        scanf("%d", a[i]);
    }
    
    printf("\n Array elements are as follows : \n");
    for(i=0;i<10;i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}