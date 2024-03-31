#include <stdio.h>


// 구구단 확장판 
int main () {
    int startNum;
    int endNum;
        printf("구구단을 시작합니다!\n");
        printf("몇단부터 시작할까요?\n");
        scanf("%d", &startNum);
        printf("몇단까지 할까요?\n");
        scanf("%d", &endNum);

            while (startNum > 255 || startNum < 1 || endNum < 1 || endNum > 255) {
                printf("1 ~ 255 사이의 숫자를 적어주세요\n");
                printf("몇단부터 시작할까요?\n");
                scanf("%d", &startNum);
                printf("몇단까지 할까요?\n");
                scanf("%d", &endNum);
            }
        for(int i=startNum; i<=endNum; i++){
                printf("\n  %d 단\n", i);
        for(int j=1; j<10; j++) {
            printf("%d X %d = %d\n", i, j, i*j);
        }
    }
        }
        



// 구구단

// int main () {
//     int startNum;
//         printf("구구단을 시작합니다!\n");
//         printf("몇단부터 시작할까요?\n");
//         scanf("%d", &startNum);
//             while (startNum > 9 || startNum==0) {
//                 printf("1 ~ 9 사이의 숫자를 적어주세요\n");
//                 printf("몇단부터 시작할까요?\n");
//                 scanf("%d", &startNum);
//             }
//         for(int i=startNum; i<10; i++){
//                 printf("\n  %d 단\n", i);
//         for(int j=1; j<10; j++) {
//             printf("%d X %d = %d\n", i, j, i*j);
//         }
//     }
//         }
        
