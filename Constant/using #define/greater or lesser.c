#include<stdio.h>
#define greater(x,y) \
if(x>y) \
printf("x is greater than y"); \
else \
printf("y is greater than x"); 

int main()
{
    greater(6,5);
    return 0;

}

