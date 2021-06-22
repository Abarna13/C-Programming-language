#include<stdio.h>
int main()
{
    int n, q, rem, fact=1, result=0, i;
    printf("Enter a number : ");
    scanf("%d", &n);

    q = n;
    while(q != 0)
    {
        rem = q % 10;
        for(i=1;i<=rem;i++)
        {
            fact = fact * rem;
        }
        result = result + fact;
        fact = 1;
        q = q/10;

        if(result == n)
        {
            printf("It is an strong Number.");
        }
        else
        {
            printf("It is not a Strong Number");
        }

    }


}