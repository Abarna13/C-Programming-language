#include<stdio.h>

typedef struct
{
    int a;
    char b;
    double c;
}data;


int main()
{
    data arr[10];
    arr[0].a = 10;
    arr[1].b = 'c';
    arr[2].c = 10.67;

    printf("%d", arr[0].a);
    printf("\n%c", arr[1].b);
    printf("\n%f", arr[2].c);

    printf("\n%d", sizeof(arr[10]));
    printf("\nsize of int : %d", sizeof(int));
    printf("\nsize of char : %d", sizeof(char));
    printf("\nsize of double : %d", sizeof(double));

}

