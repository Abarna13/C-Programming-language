/*Program for Printing stars for 6 rows * 5 columns

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *


*/


#include <stdio.h>

int main()
{
    int i, j; // i -> rows , j -> Columns
    for(i=1; i<=6; i++)
    {
       for(j=1; j<=5; j++)
       {
           printf("* ");
       }
       printf("\n");
   }
    return 0;
}