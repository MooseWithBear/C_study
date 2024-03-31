#include <stdio.h>
// #define LENGTH 5 // 길이 정의하면 편하게 사용가능하다.



int bubbleSort(int *arrayPointer, int length); // 1차원 배열은 포인터의 기능과 동일하기 때문에 포인터 대신 arr[0]을 사용해도 된다


int main (void) 
{
    int arr[5] = {3,2,5,4,1};
    int i,j,temp;
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("-----------------------\n\n");

    int count = bubbleSort(arr, length);
    // for (i = 0; i < length - 1 ; i++)
    // {
    //     for (j = 0; j < length - 1 - i; j++)
    //     {
    //         count++;

    //         if(arr[j] > arr[j+1]) // 왼쪽이 더 크면 교환 == 오름차순
    //         {
    //             temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // }
    
    for (i = 0; i < length; i++)
    {
        printf("%d", arr[i]);
    }
    
    printf("\n순환 카운트 %d", count);
    printf("\n-----------------------\n");
    return 0;
}



// 버블 정렬 함수
int bubbleSort(int *arrayPointer, int length) 
{
    int count = 0; //  변수값 초기화를 해주지 않으면 주소값에 이전 값이 존재할 가능성이 있다. 초기화는 생활화하자
    for (int i = 0; i < length - 1 ; i++)
    {
        for (int j = 0; j < length - 1 - i; j++)
        {
            count++;

            if(arrayPointer[j] > arrayPointer[j+1]) // 왼쪽이 더 크면 교환 == 오름차순
            {
                int temp = arrayPointer[j];
                arrayPointer[j] = arrayPointer[j+1];
                arrayPointer[j+1] = temp;
            }
        }
    }
    return count;
}