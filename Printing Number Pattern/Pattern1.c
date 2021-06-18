/*
Program for printing Number Pattern

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6

*/

#include <stdio.h>

int main()
{
    int i, j; // i -> rows , j -> Columns
    for(i=1; i<=6; i++)
    {
       for(j=1; j<=i; j++) 
       {
           printf("%d ", j);
       }
       printf("\n");
   }
    return 0;
}