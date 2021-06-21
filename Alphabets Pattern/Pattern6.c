#include<stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the no of rows : "); //If i give input as 8
    scanf("%d", &rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ", 64+i);
        }
        printf("\n");
    }
}


/* 

Output : 


Enter the no of rows : 8
A
B B
C C C
D D D D
E E E E E
F F F F F F
G G G G G G G
H H H H H H H H


*/