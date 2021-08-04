#include<stdio.h>
int main()
{
int c[3][4]={2,3,1,6,4,1,6,2,2,7,1,10};
printf(“%u, %u\n”, c+1, &c+1);
return 0;
}
