// #define _CRT_SECURE_NO_WARNIGS

// #include <stdio.h>
// int main() {
//     int amount ;
//     printf("총 금액 입력: ");
//     scanf("%d", &amount);
//     printf("총 계산 금액: %d \n\n", amount);

//     int cnt50000 = amount / 50000;
//     int changes = amount % 50000;
//     printf("오만원권 %d 장 \n", cnt50000);

//     int cnt10000 = changes / 10000;
//     changes %= 10000;
//     printf("일만원권 %d 장 \n", cnt10000);

//     int cnt1000 = changes / 1000;
//     changes %= 1000;
//     printf("1천원권 %d 장 \n", cnt1000);

//     printf("잔금: %d \n", changes);

//     return 0;

// }