
#include <stdio.h>

int main()
{
    int a, b;
    a = 78;
    b = 90;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swapping of a and b value without using third variable : \na = %d \t b = %d",a,b);
    
    return 0;
}