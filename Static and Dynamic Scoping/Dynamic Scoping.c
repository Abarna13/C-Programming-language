/*Dynamic Scoping :

In dynamic scoping definition of a variable is resolved by searching its containing block and if not found then searching its calling function and if still not found then the function which called the calling function and so on.

*/

//Program


#include<stdio.h>

int fun1(int);
int fun2(int);
int a=5;
int main()
{
    int a = 10;
    a = fun1(a);
    printf("%d", a);
}

int fun1(int b)  //In here b = 10 because its called in the first block of code itself
{
    b = b + 10; 
    b = fun2(b); //b = 20
    return b;
    
}

int fun2(int b) //b = 20
{
    int c;
    c = a+b; //so when a value is not here its search in before block(int fun1) if in there also a value not available it searches in main block there a value is available so a = 10 and b = 20 so c = 10+20 =30 
    return c; //c = 30
}

/* Output

30

*/