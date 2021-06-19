/*
Program for Printing Number Pattern


1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
7 7 7 7 7 7 7


*/




#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}