#include<stdio.h>

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
    struct car c1 = {"DD is 90", "Diesel", 78,5,76.9};
    struct car c2 = {"kappa", "Petrol", 45,4,48.2};
    printf("%s\n", c1.engine);
    printf("%s\n", c1.fuel_type);
    printf("%d\n", c1.fuel_tank_capacity);
    printf("%d\n", c1.seating_capacity);
    printf("%f\n", c1.city_mileage);
}
