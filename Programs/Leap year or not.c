//Check whether the year is leap year or not

#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);

    if(year % 400 == 0)
    {
        printf("%d It is an leap year", year);
    }
    else if(year % 100 == 0)
    {
        printf("%d It is not an leap year", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d It is an leap year", year);
    }
    else
    {
        printf("%d It is not an leap year", year);
    }
    return 0;
}