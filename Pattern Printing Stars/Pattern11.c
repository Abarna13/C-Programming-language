#include<stdio.h>
int main()
{
    int i, j, rows, space;
    printf("Enter no of rows : "); //If i give input as 6
    scanf("%d", &rows);
    for(i=rows;i>=1;i--)
    {
        for(space=1;space<=rows-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}


/*
Output :

***********
 *********
  *******
   *****
    ***
     *



*/