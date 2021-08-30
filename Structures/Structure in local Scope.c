//Employee program

#include<stdio.h>


//global scope
struct
{
    char *name;
    int age;
    int salary;
}emp1,emp2;

//local scope

int manager()
{

    struct
    {
        char *name;
        int age;
        int salary
    }manager;

    manager.age = 29;

    if(manager.age >= 30)
        manager.salary = 65000;
    else
        manager.salary = 40000;


    return manager.salary;
}


int main()
{

    printf("Enter Employee 1 Salary :  \n");
    scanf("%d", &emp1.salary);
    printf("Enter Employee 2 Salary : \n");
    scanf("%d", &emp2.salary);

    printf("Employee 1 salary is %d\n", emp1.salary);
    printf("Employee 2 salary is : %d\n", emp2.salary);
    printf("Manager salary is : %d", manager());
}
