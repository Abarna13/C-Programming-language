//Program to print numbers from 1 to 10 in such a way that when the number is odd add 1, when the number is even subtract 1

#include<stdio.h>

void odd();
void even();

int n = 1;


void odd()
{
    if(n <= 10)
    {
        printf("%d", n+1);
        n++;
        even();
    }
    
    return;
}


void even()
{
    if(n <= 10)
    {
        printf("%d", n-1);
        n++;
        odd();
    }
    
    return;
}


int main()
{
    odd();
}


