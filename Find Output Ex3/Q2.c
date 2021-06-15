#include <stdio.h>
int main()
{
    int i = 5;
    int var = sizeof(i++);
    printf("%d %d", i, var);
    return 0;
    
}