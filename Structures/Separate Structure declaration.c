#include <stdio.h>
#include <string.h>

struct car
{
    char engine[50];
    char fuel_type[20];
    int fuel_tank_capacity;
    int seating_capacity;
    float city_mileage;

};

int main()
{
    struct car car1; //Declaring structure in main function and changing the name car to new data type as car1
    strcpy(car1.engine, "DD is 190 Engine");
    strcpy(car1.fuel_type, "Gasoline");
    car1.fuel_tank_capacity = 2000;
    car1. seating_capacity = 5;
    printf("Engine is : %s\n", car1.engine);
    printf("Fuel type is : %s\n", car1.fuel_type);
    printf("Fuel tank capacity of car : %d\n", car1.fuel_tank_capacity);
    printf("Seating capacity is : %d\n", car1. seating_capacity);

}


