#include<stdio.h>

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

    int choice;
    float a,b,result;
    printf("Enter your choice : 0 for add, 1 for sub,2 for mul, 3 for div : \n");
    scanf("%d", &choice);
    printf("Enter 2 Numbers : \n");
    scanf("%f %f", &a, &b);

    switch(choice)
    {

        case 0:result = add(a,b);
        break;
        case 1:result = sub(a,b);
        break;
        case 2:result = mul(a,b);
        break;
        case 3:result = div(a,b);
        break;
    }

    printf("Result is : %f", result);


}





