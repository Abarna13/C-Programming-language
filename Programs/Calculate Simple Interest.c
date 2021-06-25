#include<stdio.h>
int main()
{
    int principal, time, rate, SI;
    printf("Enter the Principal Amount : ");
    scanf("%d", &principal);
    printf("Enter the Time : ");
    scanf("%d", &time);
    printf("Enter the Rate : ");
    scanf("%d", &rate);
    SI = (principal * time * rate) / 100;
    printf("Simple Interest is : %d", SI);
    return 0;
}