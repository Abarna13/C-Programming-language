#include<stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the No of Rows : "); //If i give input as 7
    scanf("%d", &rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=rows-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}


/*
Output :

*
**
***
****
*****
******
*******
******
*****
****
***
**
*


*/