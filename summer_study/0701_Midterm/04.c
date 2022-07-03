#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double getJudgeData(); // 값의 유효성 검증, 정상 범위 아닐 경우 다시 입력받는다. 정상 값일 경우 해당 값을 반환, n명에 대하 한 번 호출

void calcScore(double d[], int n);
// 최고점, 최하점 버리고 남은 점수 합한 후 평균 구한다. .2f로 반환, 최고점과 최하점은 아래 함수를 이용

double findLowest(double d[], int n); // 최하점 반환
double findHighest(double d[], int n); // 최고점 반환

int main() {
    int n;
    double arr[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        arr[i] = getJudgeData();
    }
    calcScore(arr, n);
}

double getJudgeData() {
    double i;
    
    while(1) {
        scanf("%lf", &i);
        if(i >= 0.0 && i <= 10.0) break;
    }

    return i;
}

void calcScore(double d[], int n) {
    double max = findHighest(d, n);
    double min = findLowest(d, n);
    double sum = 0;

    for(int i = 0; i < n; i++) {
        sum += d[i];
    }
    double ave = (sum - max - min) / (n - 2);

    printf("%.2lf", ave);
}

double findLowest(double d[], int n) {
    double min = d[0]; // 0이 아니라 i값을 넣어줘서 시간낭비
    for(int i = 0; i < n; i++) {
        if(d[i] < min) min = d[i];
    }
    return min;
}

double findHighest(double d[], int n) {
    double max = d[0];
    for(int i = 0; i < n; i++) {
        if(d[i] > max) max = d[i];
    }
    return max;
}

