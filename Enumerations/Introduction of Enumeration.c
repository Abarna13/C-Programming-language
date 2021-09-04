/*

Enumeration :


An Enumerated type is a user defined type which is used to assign names to integral constants because names are easier to handle in Program

*/

#include<stdio.h>

enum Bool{False, True};

int main()
{
    enum Bool var;
    var = True;
    printf("%d", var);
}
