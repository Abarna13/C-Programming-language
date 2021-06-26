#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if(num>0)
    {
        printf("It is a Positive Number");
    }
    else if(num<0)
    {
        printf("It is a Negative Number");
    }
    else
    {
        printf("It is equal to zero");
    }
}