/*

Accessing Members of Structure

we can access Members of Structure  using (.) dot operator

*/

#include<stdio.h>

struct car
{
    int fuel_tank_cap;

}car1,car2;

int main()
{
    car1.fuel_tank_cap = 34;
    car2.fuel_tank_cap = 56;
    printf("%d %d", car1.fuel_tank_cap, car2.fuel_tank_cap);
}

