#include<stdio.h>

int main()
{
    int n,i,sum = 0;
    
    printf("\nEnter the Number : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sum = sum + i;
    }
    printf("\nSum of %d Natural number is : %d", n, sum);
    return 0;


}
