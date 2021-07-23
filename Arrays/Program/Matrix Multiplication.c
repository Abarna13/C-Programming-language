#include <stdio.h>
#define MAX 50

int main()
{
  int a[MAX][MAX],b[MAX][MAX], product[MAX][MAX];
  int arows, acolumns,brows,bcolumns;
  int i,j,k;
  int sum = 0;
 
  //For Matrix A
 
  printf("Enter the rows and columns of matrix A : ");
  scanf("%d %d", &arows, &acolumns);
 
  printf("Enter the Elements of matrix a : \n");
 
  for(i=0;i<arows;i++)
  {
   
    for(j=0;j<acolumns;j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
 
 
  //For Matrix B

printf("Enter the rows and columns of matrix B : ");
scanf("%d %d", &brows, &bcolumns);

if(brows != acolumns)
{
  printf("sorry!we cant multiply the rows and columns of A");
}
else
{
  printf("Enter the Elements of matrix b : \n");
 
  for(i=0;i<brows;i++)
  {
   
    for(j=0;j<bcolumns;j++)
    {
      scanf("%d", &b[i][j]);
    }
  }
 
}

printf("\n");

for(i=0;i<arows;i++)
{
  for(j=0;j<bcolumns;j++)
  {
    for(k=0;k<brows;k++)
    {
      sum += a[i][k] + b [k][j];
    }
    product[i][j] = sum;
    sum = 0;
   
   
  }
}

//Printing array elements

printf("Resultant Matrix : ");

for(i=0;i<arows;i++)
{
  for(j=0;j<bcolumns;j++)
  {
    printf("%d", product[i][j]);
  
   }
  
   printf("\n");
}
   
}

