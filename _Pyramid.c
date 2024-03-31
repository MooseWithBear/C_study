#include <stdio.h>

int main () {
    int floor;
    printf("몇층까지 쌓겠느냐?\n");
    scanf("%d", &floor);
    // floor = 3;
    //10층
    for(int i=0; i<floor; i++){
        for(int j=i; j<floor-1; j++){
            printf(" ");
    }
        for(int k=0; k<i*2+1; k++) {
            printf("*");
        }
        printf("\n");
    }

}

// 피라미드.
// 1층에 1개 *
// 2층에 3개 **
// 3층에 5개 
// 4층에 7개

//     *
//    ***
//   *****
//  *******
// *********
// 1층에 앞빈칸은 총 층개수-1
// 2층에 앞빈칸은 총 층개수-2