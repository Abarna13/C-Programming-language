
#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter No of Rows : "); //If i give input as 8
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)
    {
       for(j=1; j<=i; j++) 
       {
           printf("* ");
       }
       printf("\n");
   }
    return 0;
}


/* OUTPUT :



* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * * 
* * * * * * * * 

*/

