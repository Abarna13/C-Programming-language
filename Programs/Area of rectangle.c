//Program for Area of Rectangle


#include <stdio.h>

int areaofrectangle(int length, int breadth)
{
    int area;
    area = length * breadth;
    return area;
}

int main()
{
    int l, b;
    printf("Length of a Rectangle : ");
    scanf("%d", &l);
    printf("Breadth of a Rectangle : ");
    scanf("%d", &b);
    int area = areaofrectangle(l, b);
    printf("Area of a Rectangle : %d", area);
}