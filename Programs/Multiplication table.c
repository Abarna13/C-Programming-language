
#include <stdio.h>

int main()
{
    int n,n1,i;
    printf("Enter any number : ");
    scanf("%d", &n);
    
    printf("Multiplication table for %d is : ", n);
    
    for(i=1;i<=12;i++)
    {
        n1 = n * i;
        printf("\n%d * %d = %d", n,i,n1);
        
    }
}