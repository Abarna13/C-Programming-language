//Program for Designated Initialization of Arrays


#include<stdio.h>  
int main(){      
int i=0;    
int marks[5] = {[0] = 80, [3] = 67, [4] = 56};     

for(i=0;i<5;i++)
{ 

    printf("%d \n",marks[i]);
    
}    
return 0;  
}    