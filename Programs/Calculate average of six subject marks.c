#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5,sub6,average;
    printf("Enter the Subject1 mark : ");
    scanf("%f", &sub1);
    printf("Enter the Subject2 mark : ");
    scanf("%f", &sub2);
    printf("Enter the Subject3 mark : ");
    scanf("%f", &sub3);
    printf("Enter the Subject4 mark : ");
    scanf("%f", &sub4);
    printf("Enter the Subject5 mark : ");
    scanf("%f", &sub5);
    printf("Enter the Subject6 mark : ");
    scanf("%f", &sub6);
    average = (sub1 + sub2 + sub3 + sub4 + sub5 + sub6) / 6;
    printf("Average is %f", average);
    return 0; 

}