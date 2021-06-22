#include<stdio.h>
int main()
{
    int n, rows, i, j;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    n = 1;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
}