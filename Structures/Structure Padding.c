#include<stdio.h>

struct abc
{
    char a; //1 byte
    char b; //1 byte and empty 2 bytes
    int c; //4 byte

}var;


int main()
{
    struct abc var;
    printf("%d", sizeof(var));
}
