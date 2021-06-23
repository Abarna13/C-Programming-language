#include<stdio.h>
int main()
{
    int base, exponent;
    int power=1, expo;
    printf("Enter the base value : ");
    scanf("%d", &base);
    printf("Enter the exponent value : ");
    scanf("%d", &exponent);

    expo = exponent;
    if(exponent>0)
    {
        while(exponent != 0)
        {
            power = power * base;
            exponent--;
        }
    }
    printf("%d to the power of %d is %d", base, expo, power);
}