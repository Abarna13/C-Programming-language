/* Program for Printing stars 


*
* *
* * *
* * * *
* * * * *

*/

#include <stdio.h>

int main()
{
    int i, j; // i -> rows , j -> Columns
    for(i=1; i<=5; i++)
    {
       for(j=1; j<=i; j++) 
       {
           printf("* ");
       }
       printf("\n");
   }
    return 0;
}