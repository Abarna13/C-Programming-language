//Write a Program to print fibonacci series upto n terms.

#include<stdio.h>
int main()
{
    int a, b, n, i, result;
    
    printf("Enter the N Value : ");
    scanf("%d", &n);
    
    a = 0;
    b = 1;

    for(i=1;i<=n;i++)
    {
        printf("\n%d", a);
        result = a + b;
        a = b;
        b = result;
        
        
    }

}