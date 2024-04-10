#include <stdio.h>

int arr[20] = {5,8,11,17,16,20,1,4,3,7,9,13,12,18,2,6,10,14,15,14}; 
int len = 20;
void quickSort(int *arr, int start, int end) 
{
    int i=start+1; int j=end; int pivot = start; int temp; 

    if(start>=end){
        return;
    }
    while (i<=j)
    {
         
        while (arr[pivot] >= arr[i])
        {
            i++;
        }
        while (arr[pivot] <= arr[j] && j > start)
        {
            j--;
        }
        if (i>j) {
            temp = arr[pivot];
            arr[pivot] = arr[j];
            arr[j] = temp;
        }else {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    quickSort(arr, start, j-1);
    quickSort(arr, j+1, end);
}
}



int main(void)
{
    quickSort(arr, 0, len-1);
    for(int i=0; i<len; i++)
    {
        printf("%d ", arr[i]);
    }
        return 0;
}
