#include<stdio.h>

int main()
{
    int n,i,sum;
    sum = 0;
    printf("\nEnter the Number : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;


}