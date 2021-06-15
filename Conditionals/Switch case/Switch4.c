
#include <stdio.h>
#define y 2
#define z 6
int main()
{
    int x = 2;
    switch(x)
    {
        case y:printf("Number is 2");
        break;
        case z:printf("Number is 6");
        break;
        default:printf("Default case");
        break;
    }
    return 0;
}