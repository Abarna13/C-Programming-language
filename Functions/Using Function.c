//Program for use of Function its implemented using to Find Area of Rectangle.


#include <stdio.h>

int areaofrectangle(int length, int breadth)
{
    int area;
    area = length * breadth;
    return area;
}

int main()
{
    int l = 8, b = 4;
    int area = areaofrectangle(l, b);
    printf("Area of a Rectangle : %d", area);
}