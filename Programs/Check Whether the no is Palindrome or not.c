//Program for checking the Number is palindrome or not

#include<stdio.h>
int main()
{
    int n,q,rem,result=0;
    printf("Enter the Number : ");
    scanf("%d", &n);

    q=n;
    while(q>0)
    {
        rem = q % 10;
        result = result * 10 + rem;
        q = q / 10; 
    }
    if (result == n)
    {
        printf("Given number is a palindrome number"); 
    }
    else
    {
        printf("Given number is not a palindrome number"); 
    }
    return 0;   
}