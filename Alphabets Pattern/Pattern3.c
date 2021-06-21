#include<stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the No of Rows : "); //If i give input as 9
    scanf("%d", &rows);
    for(i=rows;i>=1;i--)
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


Enter the No of Rows : 9
A B C D E F G H I 
A B C D E F G H 
A B C D E F G 
A B C D E F 
A B C D E 
A B C D 
A B C 
A B 
A 

*/