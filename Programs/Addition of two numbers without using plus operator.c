#include<stdio.h>
int main()
{
    int x, y, i;
    printf("Enter the x value : ");
    scanf("%d",&x);
    printf("Enter the y value : ");
    scanf("%d", &y);
    
    for(i=0;i<y;i++)
    {
        x++;
    }
    printf("\nThe sum of x and y is : %d", x);
    return 0;
}
