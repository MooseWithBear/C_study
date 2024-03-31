#include <stdio.h>
#include <limits.h>
#define NUMBER 5


int main (void) 
{
    int i, min, max, max_index, min_index;
    int array[NUMBER];
    max = 0;
    min_index = max_index = 0;
    min = INT_MAX;


    printf("숫자를 5개 입력하세요\n");

        for(i=0; i<NUMBER; i++) {

        scanf("%d", &array[i]);
        // max < array[i] ? max = array[i], max_index=i :0;
        // min > array[i] ? min = array[i], min_index=i :0;
        
        if(max < array[i]) {
            max = array[i];
            max_index = i;
        }
    
        if(min > array[i]) {
            min = array[i];
            min_index = i;
        }    
    } 

    
    printf("가장 큰 값은 %d, 인덱스는 %d 입니다.", max, max_index+1);
    printf("가장 작은 값은 %d, 인덱스는 %d 입니다.", min, min_index+1);

}
