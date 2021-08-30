#include<stdio.h>

struct car
{
    int fuel_tank_capacity;
    int seating_capacity;
    float city_mileage;
};

int main()
{
    struct car c[2];
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter the car %d fuel tank capacity : ", i+1);
        scanf("%d", &c[i].fuel_tank_capacity);
        printf("Enter the car %d seating capacity : ", i+1);
        scanf("%d", &c[i].seating_capacity);
        printf("Enter the car %d city mileage : ", i+1);
        scanf("%f", &c[i].city_mileage);


    }
    printf("\n");
    for(i=0;i<2;i++)
    {
        printf("\nCar %d details : \n", i+1);
        printf("\nFuel tank capacity : %d\n", c[i].fuel_tank_capacity);
        printf("\nSeating capacity : %d\n", c[i].seating_capacity);
        printf("\nCity mileage : %f\n", c[i].city_mileage);

    }
    return 0;


}
