//Call by reference --> Passing Address of Actual Parameter to formal Parameter
//& --> Address
//* --> used to get value for particular address.


//Swapping of two values using call by reference

#include<stdio.h>
void swapping(int*, int*);
int main()
{
    int a, b;
    a = 10;
    b = 20;
    swapping(&a,&b); //Actual parameter
    printf("\nSwapping of a & b is a = %d and b = %d", a, b);
}

void swapping(int*a, int*b) //formal parameter
{
    int temp;
    temp = *a;/* save the value of *a to temp. so temp = 10 */
    *a = *b;/* save the value of *b to *a. so a = 20 */
    *b = temp;/* save the value of temp to *b. so b = 10*/
    printf("\nAfter Swapping of a & b is a = %d and b = %d", *a, *b);

}