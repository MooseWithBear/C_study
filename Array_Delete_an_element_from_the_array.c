#include <stdio.h>  

void pop(int arr[], int count);


int main (void) 
    {
        int arr[5] = {1,2,3,4,5};
        int count = sizeof(arr) / sizeof(arr[0]);
        pop(arr, count);







        return 0;
    }      


void pop(int arr[], int count)
{
    int i;
    
    for (i = 0; i < count; i++)
    {
        arr = 
        printf("%d \n", arr[i]);
    }
    
    

}