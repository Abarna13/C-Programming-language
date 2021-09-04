/*

Needs of Enumerations :

1.Enum can be declared in a local scope
2.Enum names are automatically initialized by the compiler.

*/

//Declare in local scope

#include<stdio.h>

int main()
{
    enum Bool{False,True}var;  //local scope
    var = True;
    printf("%d", var);


}



