

#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("\nEnter any number : ");
        scanf("%d", &n);
    }
    while (n != 0);
    printf("You are out of the loop");
    return 0;
    
}