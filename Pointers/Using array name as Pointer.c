//Using Array name as Pointer

/*
Name of an Array can be used as a Pointer to an first element of an Array.
i.e a[0]
*/

//Program

#include<stdio.h>
int main()
{

    int a[5];
    *a = 10; //Its a[0]
    printf("a[0] is : %d", a[0]);

    *(a+1) = 67; //a[1]
    printf("\na[1] is : %d", a[1]);

    *(a+2) = 78; //a[2]
    printf("\na[2] is : %d", a[2]);

    *(a+3) = 90; //a[3]
    printf("\na[3] is : %d", a[3]);


    *(a+4) = 108; //a[4]
    printf("\na[4] is : %d", a[4]);

    return 0;

}
