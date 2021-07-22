//Program that reads a 5*5 array of integers and then print the row sum and column sum using the Multi-Dimensional Array
#include <stdio.h>

int main()
{
    int a[5][5] = {
        {6,7,9,1,0},
        {4,5,6,7,9},
        {2,3,7,8,9},
        {5,8,9,2,3},
        {5,9,10,6,2}
    };
    
    int i,j;
    int sum = 0;
    
    //Row sum
    
    printf("Row Total : ");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            sum = sum + a[i][j];
            
        }
        printf("%d ",sum);
        sum = 0;
    }
    
    //Column sum
    
    printf("\nColumn Total : ");
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
            sum = sum + a[i][j];
            
        }
        printf("%d ",sum);
        sum = 0;
    }
}
