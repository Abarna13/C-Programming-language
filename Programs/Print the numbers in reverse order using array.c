//Program for print the following numbers in reverse order

#include<stdio.h>
int main()
{
    int a[10] = {28,56,78,40,20,10,54,38,90,100};
    int i;
    
    printf("Original Order : ");

    //Original Order

    for(i=0;i<10;i++)
    {
        
        printf("%d ",a[i]);
    }
    
    printf("\nReverse Order : ");
    
    //Reverse Order

    for(i=9;i>=0;i--)
    {
        
        printf("%d ",a[i]);
    }

}