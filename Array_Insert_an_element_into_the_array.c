
// 1. Prepend at the end of the array.
// 2. Append at the beginning.
// 3. Insert in the middle of the array.

// 2. 배열 맨 앞에 넣기
// 3. 배열 중간에 넣기



// 1. 배열 맨 끝에 넣기 (realloc X, malloc X) 
// -> C언어는 정적언어이며 실행 전 이미 배열의 길이가 정해져있으므로 동적할당 없이는 추가하기가 어렵다.
#include <stdio.h>  
# define ARR_SIZE 20

int main(void)
{
    int i;
    int arr[ARR_SIZE] = {1,1,1,1,1};
    int newNumber = 3;

    arr[ARR_SIZE-1] = newNumber;

    for (i = 0; i < ARR_SIZE; i++)
    {
    printf("%d ", arr[i]);
    }
    return 0;
}

// S1. Solution - 
