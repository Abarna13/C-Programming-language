

#include<stdio.h>
int main()
{
    int n,temp,r,sum=0;
    printf("Enter the number = "); //For eg 153 = 1*1*1 + 5*5*5 + 3*3*3 = 1 + 125 + 27 = 153 
    scanf("%d",&n); 
    
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
        
    }
    if(temp==sum)
    {
        printf("It is an Armstrong  number");
    }
    else
    {
        printf("It is not an Armstrong number");  
    }
  
return 0;  
}   