
#include <stdio.h>
int main()
{
    int x = 23;
    switch(x)
    {
        case 3+3:printf("Choice 1");
        break;
        case 3+4*5:printf("Choice 2");
        break;
        default:printf("Default case");
        break;
    }
    return 0;
}