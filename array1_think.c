// 위 입력받는 학생들의 성적을 높은 순으로 정렬하는 프로그램을 만들어 보세요.

#include <stdio.h>
int main() {
    int arr[5];
    int rankArr[5];

    int i, j, num;


    for(i = 0; i < 5; i++) {
        printf("%d번째 학생의 성적 :  \n", i + 1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 5; i++) {
        num = 0;
        for(j = 0; j < 5; j++){
            if(arr[i] < arr[j]) {
                num += 1;
            }
        }
        rankArr[num] = arr[i];
    }
    i = 0;
    while (i < 5) {
        printf("%d 등: %d 점 \n", i + 1, rankArr[i]);
        i++;
    }

    return 0;

}

