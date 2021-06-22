#include<stdio.h>
int main()
{
    int n, i, factor = 0;
    printf("Enter any Number : ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            factor = factor + 1;
        }
        
    }
    if(factor==2)
    {
        printf("It is an Prime Number");
    }
    else
    {
        printf("It is not an prime Number");
    }
}