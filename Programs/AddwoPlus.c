//Program to Add two numbers without using Plus operator 


#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the x value : ");
    scanf("%d", &x);
    printf("Enter the y value : ");
    scanf("%d", &y);

    if(y>0)
    {
        while(y != 0)
        {
            x++;
            y--;
            
        }
    }

    else if(y<0)
    {
        while(y != 0)
        {
            x--;
            y++;
        }
    }
    printf("Sum of two values is: %d", x);
    return 0;
}