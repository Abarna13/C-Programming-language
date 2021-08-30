
#include <stdio.h>
#include <string.h>

struct
{
    char *engine;
}car1,car2; //These two functions are in global scope

int main()
{


    car1.engine="DD is 190 Engine";
    car2.engine="1.2 L Kappa Dual VTT";
    printf("%s\n", car1.engine);
    printf("%s", car2.engine);
}
