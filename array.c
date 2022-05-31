/*
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // 원소 개수는 생략 가능

    printf("Arr의 3번째 원소는 %d 이다. \n", arr[14]); //  해당 영역에 있는 수를 말해준다. 접근 불가능한 영역이라면 에러를 준다.
    return 0;
}

#include <stdio.h>
int main() {
    int i;

    int arr[10] = {20, 32, 124, 25123, 41234, 232, 323, 3123, 5436, 5375};

    for(i = 0; i < 10; i++) {
        printf("arr의 %d 째 수는 %d 이다 \n", i+1, arr[i]);
    }
    return 0;
}

#include <stdio.h>
int main() {
    int arr[5];
    int i, ave = 0;
    for(i = 0; i < 5; i++){
        printf("%d 성적은? \n", i+1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 5; i++) {
        ave += arr[i];
    }
    printf("성적 평균은 %d점이다.\n", ave / 5);
    return 0;
} 

#include <stdio.h>
int main() {
    int guess = 5; // 소수 예측 수
    int prime[1000]; // 소수 배열

    int index = 1; // 소수 2, 3은 이미 찾았기 때문
    int i; // for문 변수
    int ok; // 소수 판별 변수
    prime[0] = 2; // 이미 찾은 소수들은 특별한 경우로 친다.
    prime[1] = 3;

    for(;;) {
        ok = 0;
        for(i = 0; i <= index; i++) {
            if(guess % prime[i] != 0) {
                ok++;
            } else {
                break;
            }
        }
        if(ok == (index + 1)) {
            index++;
            prime[index] = guess;
            printf("소수 : %d \n", prime[index]);
            if(index == 999) break;
        }
        guess += 2;
    }
    return 0;
} */