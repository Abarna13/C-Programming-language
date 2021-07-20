#include <stdio.h>

int foo(int* a,int*b)
{
  int sum = *a + *b;
  *b = *a;
  return *a = sum - *b;
}

int main()
{
  int i = 0,j = 1, k = 2,I;
  I = i++ || foo(&j,&k);
  printf("%d%d%d%d", i,j,k,I);
  return 0;
}

/*
Output:

1211


*/