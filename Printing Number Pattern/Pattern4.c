#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter No of Rows : "); //If i give input as 7
    scanf("%d", &rows);
    for(i=rows; i>=1; i--)
    {
       for(j=1; j<=i; j++) 
       {
           printf("%d", j);
       }
       printf("\n");
   }
    return 0;
}

/* OUTPUT :

1234567
123456
12345
1234
123
12
1


*/