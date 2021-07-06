//Question

/*Consider the program as hypothetical programming language which allows global variable and a choice of static or dynamic scoping :

let x be the value printed under static scoping,
let y be the value printed under dynamic scoping
Find x and y value

*/

#include<stdio.h>

int i;
program main()
{
    i = 10;
    call f();
}

procedure f()
{
    int i = 20;
    call g();
}

procedure g()
{
    print i;
}

/*Output

x = 10, y = 20

*/