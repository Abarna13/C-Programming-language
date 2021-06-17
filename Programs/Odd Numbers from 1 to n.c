//Program to print odd numbers from 1 to n


#include<stdio.h>
int main()
{
    int i, n;
    printf("\nEnter any number : ");
    scanf("%d", &n);
    printf("Odd numbers between 1 to %d are : ", n);
    for(i=1;i<=n;i++)
    {
        if(n%2!=0)
        {
            printf("\n%d", i);
        }
    }
    return 0;
}