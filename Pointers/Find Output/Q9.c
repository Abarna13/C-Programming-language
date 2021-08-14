#include<stdio.h>

void swap(int *x, int *y)
{

    static int *temp;
    temp = x;
    x = y;
    y = temp;

}

void printab()
{

    static int i,a = -3, b = -6;
    i = 0;
    while(i<=4)
    {

        if((i++)%2 == 1)
            continue;
        a = a+i;
        b = b+i;
    }
    swap(&a, &b);
    printf("a = %d and b = %d\n", a, b);
}

int main()
{

    printab();
    printab();
}
