
#include<stdio.h>

int main(void){

    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,0,1,2}}; //here [4][4] means [rows][columns]
    int (*ptr)[4] = &arr; //here 4 indicates column


    for(int i=0;i<3;i++){
            for(int j=0;j<4;j++)
            printf("%d ",*(ptr[i]+j));

            printf("\n");
    }
    return 0;
}
