//Program for Two dimensional array

#include <stdio.h>

int main() 
{
    int a[2][4] = {{1,2,3,4},{5,6,7,8}};
   int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);
            
        }
    }
}
    
