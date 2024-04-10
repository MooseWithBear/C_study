#include <stdio.h>

int data[10] = {3,6,1,8,9,4,2,7,10,5};
int length = 10;

void quickSort(int data[], int start, int end)
{
    //start, end는 인덱스다.
    int i = start+1;
    int j = end;
    int pivot = start;
    int temp;
    int k=0;
    if(start >= end) // 즉 start 인덱스와 end 인덱스가 같다는 말은 배열 안에 원소가 하나밖에 없다는 말이므로 바로 함수를 종료하고 리턴한다.
    {
        return;
    }

    while (j >= i) // 즉 엇갈릴 때까지 반복한다.
    {

        while (data[pivot] > data[i])
        {
            i++;
            k++;
        }
        while (data[pivot] < data[j])
        {
            j--;
            k++;
        }

        if(i>=j){
            temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;
            k++;
        } else {

            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
            k++;
        }

        quickSort(data, start, j-1);
        
        quickSort(data, j+1, end);

    }
        
    

}



int main (void) 
{
    quickSort(data, 0, length-1);
    for (int i = 0; i < length; i++)
    {
        /* code */
        printf("%d ", data[i]);
    }
    
    return 0;
}