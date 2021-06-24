//Program to add two numbers without using plus operator - (Half Adder Method)


#include<stdio.h>
int main()
{
    int sum, carry, a, b;
    printf("Enter the A value : ");
    scanf("%d", &a);
    printf("Enter the B value : ");
    scanf("%d", &b);

    while(b != 0)
    {
        sum = a^b;
        carry = (a&b)<<1;
        a = sum;
        b = carry;
    }
    printf("Sum of A and B is : %d", sum);
    return 0;
}