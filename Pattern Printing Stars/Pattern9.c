#include<stdio.h>
int main()
{
    int i,j,rows,space;
    printf("Enter No of Rows : "); //If i give input as 9

    scanf("%d", &rows);
    for(i=1;i<=rows;i++)
    {
        for(space = 1; space<=(rows-i); space++)
        {
            printf(" ");


        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;

}


/*

Output : 


        * 
       * * 
      * * * 
     * * * * 
    * * * * * 
   * * * * * * 
  * * * * * * * 
 * * * * * * * * 
* * * * * * * * * 


*/