#include<stdio.h>
int main()
{
    int n, r, sum=0, power=0;
    printf("Enter the Binary Number : ");
    scanf("%d", &n);

    while(n>0)
    {
        r = n%10;
        sum = sum + r*pow(2,power);
        n = n/10;
        power = power+1;

    }
    printf("%d", sum);

}