//Addition of Two Numbers using Function Pointer

#include<stdio.h>
int add(int a,int b)
{

    return a+b;
}

int main()
{
    int result;
    int (*ptr)(int, int) = &add;
    result = ptr(10,7);
    printf("%d", result);

}

