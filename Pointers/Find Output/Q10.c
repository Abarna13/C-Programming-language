#include<stdio.h>
int main()
{

    int i,j;
    char a[2][3] = {{'a','b','c'}, {'d','e','f'}};
    char b[3][2];
    char *p = *b;
    for(i=0;i<2;i++)
    {

        for(j=0;j<3;j++)
        {

            *(p+2*j+i) = a[i][j];

        }
    }
}

/*
Output :

a d
b e
c f

*/
