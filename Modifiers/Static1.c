#include<stdio.h>
int main()
{
    int value;
    value = increment();
    value = increment();
    value = increment();
    {
        printf("%d", value);
        return 0;
    }

}

//In here declaring some value and variable inside the function

int increment()
{
    int count = 0;
    count = count + 1;
    return count;
}