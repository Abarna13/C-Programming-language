#include<stdio.h>

int main ()
{
  int n = 5;
  int a[n];
  int *p;
  printf ("Enter elements: ");
  for (int i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
      p = &a[i];
      p++;
    }
  printf ("\nReverse order is: ");
  for (p = a + n - 1; p >= a; p--)
    printf ("\n%d ", *p);


}
