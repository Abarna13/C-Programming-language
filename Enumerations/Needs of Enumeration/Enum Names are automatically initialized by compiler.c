#include<stdio.h>

int main()
{
    enum Bool{False,True}var;  //False as 0 and True as 1 is automatically initialized by compiler
    var = True;
    printf("%d", var);


}
