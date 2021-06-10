#include<stdio.h>

int main()
{

    int a, b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);

    printf("a + b = %d\n", a+b);
    printf("a * b = %d\n", a*b);
    printf("a - b = %d\n", a-b);
    printf("a / b = %d\n", a/b);
    printf("a %% b = %d\n", a%b);
    return 0;
}
