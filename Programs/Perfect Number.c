//Check Whether the Number is Perfect Number or not


#include<stdio.h>
int main()
{
    int number;
    printf("Enter the Number : ");
    scanf("%d", &number);

    int i, rem, sum=0;

    for(i=1;i<number;i++)
    {
        rem = number % i;
        if(rem == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == number)
    {
        printf("%d is an Perfect Number", number);
    }
    else
    {
        printf("%d is not an Perfect Number", number);
    }


}