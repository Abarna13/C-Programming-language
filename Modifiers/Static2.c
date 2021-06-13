

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

//Here creating global variable outside and increasing the value inside the increment function

int count;

int increment()
{
  count = count + 1;
  return count;  
}
