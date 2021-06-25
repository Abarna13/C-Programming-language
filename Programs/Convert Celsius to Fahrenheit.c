#include<stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter the Celsius value : ");
    scanf("%f", &celsius);
    fahrenheit = 1.8*celsius + 32;
    printf("Fahrenheit is : %f", fahrenheit);
    return 0;
}