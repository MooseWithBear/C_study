
// 1. Prepend at the end of the array.
// 2. Append at the beginning.
// 3. Insert in the middle of the array.

// 2. 배열 맨 앞에 넣기
// 3. 배열 중간에 넣기



// 1. 배열 맨 끝에 넣기 (realloc X, malloc X) 
// -> C언어는 정적언어이며 실행 전 이미 배열의 길이가 정해져있으므로 동적할당 없이는 추가하기가 어렵다.
// #include <stdio.h>  
// # define ARR_SIZE 20

// int main(void)
// {
//     int i;
//     int arr[ARR_SIZE] = {1,1,1,1,1};
//     int newNumber = 3;

//     arr[ARR_SIZE-1] = newNumber;

//     for (i = 0; i < ARR_SIZE; i++)
//     {
//     printf("%d ", arr[i]);
//     }
//     return 0;
// }

// S1. Solution - 

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{   
    int* array; // 배열을 가리킬 포인터 변수 선언
    int size = 5; // 초기 배열의 크기
    int newSize = size + 1; // 추가된 요소를 포함한 새로운 배열의 크기

    // 초기 배열 할당 및 초기화
    int arr[5] = {1, 1, 2, 2, 3};
    array = (int*)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("메모리 할당에 실패했습니다.\n");
        return 1;
    }
    for (int i = 0; i < size; i++) {
        array[i] = arr[i];
    }

    // 추가된 요소 입력
    printf("새로운 값 추가 (길이 6):\n");
    scanf("%d", &array[size]);

    // 배열에 저장된 값 출력
    printf("배열에 저장된 값:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // 동적으로 할당한 메모리 해제
    free(array);

    return 0;
}
