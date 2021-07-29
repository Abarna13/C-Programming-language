//Generic Pointer or Void Pointer

#include <stdio.h>

int main()
{
    int a[] = {4,7,8,9,78};
    void *p;
    p = &a;
    printf("\n*p is : %d",*(int *)p);//Here we should mention the datatype of that pointer
}