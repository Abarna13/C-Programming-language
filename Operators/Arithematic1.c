#include<stdio.h>
int main()
{
    int a = 3, b = 6, c = 8, d = 5;
    printf("a * b / c = %d\n", a*b/c);
    printf("a + b - c = %d\n", a+b-c);
    printf("a + b * d - c %% a = %d\n", a+b*d-c%a);
    return 0;

}
