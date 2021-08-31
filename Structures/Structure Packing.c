/* For structure packing

If u want to save memory and waste the CPU cycles then Structure Packing is used.

*/


#include<stdio.h>

#pragma pack(1)   //pragma pack is a special purpose directive used to turn on or off certain features

struct abc
{
    char a;
    int b;
    char c;
}var;


int main()
{

    struct abc var;
    printf("%d", sizeof(var));
}


