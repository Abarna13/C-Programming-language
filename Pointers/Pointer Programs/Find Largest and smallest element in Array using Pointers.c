
#include <stdio.h>

void MinMax(int arr[], int len, int *min, int *max)
{
    *min = *max = arr[0];
    int i;
    for(i=1;i<len;i++)
    {
        if(arr[i] > *max)
        {
            *max = arr[i];
        }
        if(arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}

int main()
{
    int a[] = {9,76,3,56,7875,9086,894,564,21,0,6,1};
    int min,max;
    int len = sizeof(a) / sizeof(a[0]);
    MinMax(a,len, &min, &max);
    printf("Minimum value in the array is : %d", min);
    printf("\nMaximum value in the array is : %d", max);
    return 0;


}
