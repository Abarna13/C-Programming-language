//Call by Value --> Value of Actual Parameter is copied in Formal Parameter.


//Swapping of two values using call by value

#include<stdio.h>
void swapping(int, int);
int main()
{
    int a, b;
    a = 10;
    b = 20;
    swapping(a, b);//Function call   //Actual Parameter
    printf("\nSwapping of a & b is a = %d and b = %d", a, b);
}

void swapping(int a, int b)  // formal Parameter
{
    int temp;
    temp = a;/* save the value of a to temp. so temp = 10 */ 
    a = b;/* save the value of b to a. so a = 20 */
    b = temp;/* save the value of temp to b. so b = 10*/
    printf("\nAfter Swapping of a & b is a = %d and b = %d", a, b);

}