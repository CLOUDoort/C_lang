// #include <stdio.h>
// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//     printf("arr의 3번째 원소 : %d \n", arr[10]);

//     return 0;
// }
// 배열은 특정 타입의 변수들의 집합이다. // 메모리 상에서는 해당 타입 변수들의 나열
// 배열크기 생략가능

// #include <stdio.h>
// int main() {
//     int arr[10] = {100, 23, 45, 234, 27, 437, 125, 35, 23, 89};
//     int i;

//     for(i = 0; i<10; i++){
//         printf("arr의 %d 번째 원소 : %d \n", i+1, arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main () {
//     int arr[5];
//     int i, sum = 0;

//     for(i = 0; i < 5; i++) {
//         printf("%d번째 과목의 점수를 입력하세요! \n", i+1);
//         scanf("%d", &arr[i]);
//     }
//     for(i = 0; i < 5; i++) {
//         sum += arr[i];
//     }

//     printf("모든 과목 점수의 평균 : %d \n", sum / 5);

//     return 0;
// }

/*
#include <stdio.h>
int main() {
    int total;
    printf("전체 학생 수 : ");
    scanf("%d", &total);
    int arr[total];
    int i, ave = 0;

    for(i = 0; i < total; i++) {
        printf("%d 번째 학생 점수를 입력하세요! \n", i + 1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < total; i++) {
        ave += arr[i];
    }
    ave = ave / total;

    printf("학생 전체 점수의 평균 : %d \n", ave);
    
    for(i = 0; i < total; i++) {
        printf("%d 번째 학생 : ", i + 1);
        if(arr[i] >= ave) {
            printf("합격 \n");
        } else {
            printf("불합격 \n");
        }
    }

    return 0;
}
*/

// 소수 찾기 프로그램
// 소수 찾는 데에 배열을 이용한다는 것은 이전에 찾은 소수들을 배열에 저장하여, 어떤 수가 소수인지 판별하기 위해 그 수 이하의 소수들로 나누어 본다는 것
// 나누어 떨어지는 것이 없다면 소수!
// 1은 소수 x, 2와 3은 소수, 그리고 4는 소수가 아니니 5부터 시작
// 짝수 소수는 2가 유일하니 홀수만 계산
#include <stdio.h>
int main() {
    int guess = 5;
    int prime[1000];

    int i = 0;
    int index = 1;
    int ok; // 소수인지 판별하기 위한 변수 / 몇 번 반복했는지 알려주는 수 => 이 수가 index와 동일하다면 소수!

    prime[0] = 2;
    prime[1] = 3;

    for(;;) {
        ok = 0;
        for(i = 0; i <= index; i++) {
            if(guess % prime[i] != 0) {
                ok++;
            } else break;
        }
        if(ok == (index+1)) {
            index++;
            prime[index] = guess;
            printf("소수 : %d \n", prime[index]);
            if(index == 999) break;
        }
        guess += 2;
    }
    return 0;
}

