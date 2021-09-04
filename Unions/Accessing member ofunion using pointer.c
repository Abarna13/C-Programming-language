/*Accessing member of union using pointer:

    we can access member of union through pointer by using the arrow symbol(->)

*/


#include<stdio.h>
union abc
{
    int a;
    char b;

};

int main()
{
    union abc var;
    var.a = 90;
    union abc *p = &var;
    printf("A is : %d", p->a);
    printf("\nB is : %d", p->b);
    printf("\nB is : %c", p->b);
}
