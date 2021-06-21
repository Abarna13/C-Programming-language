#include<stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the No of Rows : "); //if i give input as 10
    scanf("%d", &rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ", 64+j);
        }
        printf("\n");
    }
}


/*
Output : 

A
A B
A B C
A B C D
A B C D E
A B C D E F
A B C D E F G
A B C D E F G H
A B C D E F G H I
A B C D E F G H I J


*/