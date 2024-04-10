#include <stdio.h>

int main(void)
{
    int i,j,temp, minIndex;
    int arr[5] = {4,2,5,1,3};
    int length = sizeof(arr) / sizeof(arr[0]);
    int counting = 0;

    // 선택정렬 : 1패스당 비교는 모두하면서 가장 작은 요소의 인덱스 업데이트. 교환은 1번만, 완성된 요소는 다음 비교에서 제외
    for (i = 0; i < length-1; i++)
    {
        minIndex = i;
        for (j = i+1; j < length; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
        counting++;
    }
    
    
    for (i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n카운트 %d\n",  counting);



    return 0;
}
