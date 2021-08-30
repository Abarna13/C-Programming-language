
#include<stdio.h>
#define option 4

float add(float a,float b)
{
    return (a+b);
}

float sub(float a,float b)
{
    return (a-b);
}

float mul(float a,float b)
{
    return (a*b);
}

float div(float a,float b)
{
    return (a/b);
}

int main()
{
    float (*ptrfun[option])(float,float) = {add,sub,mul,div};
    int choice;
    float a,b;
    printf("Enter your choice : 0 for add, 1 for sub,2 for mul, 3 for div : \n");
    scanf("%d", &choice);
    printf("Enter 2 Numbers : \n");
    scanf("%f %f", &a, &b);
    printf("Result is :%f", ptrfun[choice](a,b));





}





