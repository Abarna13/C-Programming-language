#include<stdio.h>
int main()
{
    float fahrenheit, Celsius;
    printf("Enter the Fahrenheit Value : ");
    scanf("%f", &fahrenheit);
    Celsius = (fahrenheit - 32) / 1.8;
    printf("Celsius is : %f", Celsius);
    return 0;
}