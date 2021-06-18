#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter No of Rows : "); //If i give input as 6
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)
    {
       for(j=1; j<=i; j++) 
       {
           printf("%d ", j);
       }
       printf("\n");
   }
    return 0;
}


/*
OUTPUT :

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6

*/




