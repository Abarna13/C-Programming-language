#include <stdio.h>
#include <string.h>

typedef struct car //car is old type
{
    char engine[50];
    char fuel_type[20];
    int fuel_tank_capacity;
    int seating_capacity;
    float city_mileage;

}car; //New type

int main()
{
    car c1;
    strcpy(c1.engine, "DD is 190 Engine");
    strcpy(c1.fuel_type, "Gasoline");
    c1.fuel_tank_capacity = 1984;
    c1. seating_capacity = 5;
    printf("Engine is : %s\n", c1.engine);
    printf("Fuel type is : %s\n", c1.fuel_type);
    printf("Fuel tank capacity of car : %d\n", c1.fuel_tank_capacity);
    printf("Seating capacity is : %d\n", c1. seating_capacity);

}


