/*
Program for printing number pattern


1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 21 


*/





#include<stdio.h>
int main()
{
    int i,j,number=1;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }
}