#include <stdio.h>


int quick_sort(int *arr, int start, int end) 
{
    int i = start;
    int j = end;
    int pivot = (start + end) / 2;
    int k = 10;
    
    while(i<=j){
        while (arr[i] < arr[pivot])
        {
            i++;
        }
        while (arr[j] > arr[pivot])
        {
            j--;
        }

        if(i<=j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        } 
        if(start < j)
        {
            quick_sort(arr, start, j);
        }
        if(i < end)
        {
            quick_sort(arr, i, end);
        }
    }

    return 0;
}


int main (void) 
{
    int arr[10] = {3,5,2,8,7,6,4,9,1,10};
    int length = sizeof(arr) / sizeof(arr[0]);
    // printf("%d", length);
    quick_sort(arr, 0, length-1);

int i;
    for(i=0;i<10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}