/*

Deciding the size of union:


Size of Union is taking according to the size of the largest member of Union.

*/

#include<stdio.h>
union abcd
{
    int a;
    char b;
    float c;
    double d;
};

int main()
{
    printf("Size of Integer : %d", sizeof(int));
    printf("\nSize of character is: %d", sizeof(char));
    printf("\nSize of float is : %d", sizeof(float));
    printf("\nSize of double is : %d", sizeof(double));


    printf("\nSize of union is : %ld", sizeof(union abcd));
}
