
#include <stdio.h>
#include<stdlib.h>

//Malloc Function ->  void* malloc(size_t size)

int main()
{
    int i,n;
    printf("Enter the limit : ");
    scanf("%d", &n);
    
    int *ptr = (int *)malloc(n* sizeof(int));
    
    if(ptr==NULL)
    {
        printf("Memory not available here...");
        exit(1);
    }
    
    for(i=0;i<n;i++)
    {
        printf("Enter an integer : ");
        scanf("%d", ptr+i);
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d ", *(ptr+i));
    }
    
    
        
        
}