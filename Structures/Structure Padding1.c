/*Structure Padding

If u want to waste memory and save CPU cycle then Structure Padding is applicable.

*/



#include<stdio.h>

struct abc
{
    char a;  //there are 4 bytes in a 32 bit processor in 4 bytes -> 1 byte will access character a and remaining 3 box will get empty
    int b;  //another 4 bytes will be accessed fully by integer b
    char c;  //In 4 bytes -> 1 byte will access character c and remaining 3 box will be also get calculated

}var;


int main()
{
    struct abc var;
    printf("%d", sizeof(var));
}
