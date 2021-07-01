#include<stdio.h>

int factorial(int input);

int main()
{
    int first_number, second_number;
    
    printf("Enter the first number : ");
    scanf("%d", &first_number);
    
    printf("Enter the second number : ");
    scanf("%d", &second_number);
    
    printf("Factorial of %d is : %d", first_number, factorial(first_number));
    printf("\nFactorial of %d is : %d", second_number, factorial(second_number));
    
}

int factorial(int input)
{
    int fact =1,i;
    for(i=1;i<=input;i++)
    {
        fact = fact * i;
        
    }
    return fact;
    
}
    
    
    