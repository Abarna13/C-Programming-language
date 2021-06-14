#include<stdio.h>
int main()
{
    char a = 7;  
    a ^= 5;  //a = a ^ 5 = 7 ^ 5 = 2;
    printf("%d", printf("%d", a+=3));  //a = a + 3 = 2 + 3 = 5; no of successfully printed characters = 1 , Because,2nd printf function will print 5 and then 1st printf function will print 1(cause 1st printf function will read how many chatacter lies in  2nd printf function).
    return 0;
    
}