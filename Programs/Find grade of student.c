#include <stdio.h>

int main()
{
    float maths,science,social,average;
    printf("Enter marks of 3 subjects : ");
    scanf("%f%f%f", &maths, &science, &social);
    average = (maths+science+social) / 3;
    if(average>=80)
    {
        printf("Distinction");
    }
    else if(average>=70 && average<80)
    {
        printf("First class");
    }
    else if(average>=60 && average<70)
    {
        printf("Second class");
    }
    else if(average>=50 && average<60)
    {
        printf("Third class");
    }
    else
    
    {
        printf("Fail");
    }
    
    
    
    return 0;
}