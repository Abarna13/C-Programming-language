
#include <stdio.h>
int main()
{
    int a = 1, b = 2, c = 3;
    switch(a+b*c)
    {
        case 1:printf("Choice 1");
        break;
        case 2:printf("Choice 2");
        break;
        default:printf("Default case");
        break;
    }
    return 0;
}