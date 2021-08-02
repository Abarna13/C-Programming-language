#include<stdio.h>
int main()
{
    int n=70;
    int *p;
    p=&n;
    printf("Address of p variable is %u \n",p);
    p=p-3;
    printf("After Subtracting 3: Address of p variable is %u \n",p);
    return 0;
}
