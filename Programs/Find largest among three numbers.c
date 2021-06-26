#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the A value : ");
    scanf("%d", &a);
    printf("Enter the B value : ");
    scanf("%d", &b);
    printf("Enter the C value : ");
    scanf("%d", &c);
    if(a>b && a>c)
    {
        printf("A is Bigger");
    }
    else if(b>a && b>c)
    {
        printf("B is Bigger");
    }
    else
    {
        printf("C is Bigger");
        
    }

    

}