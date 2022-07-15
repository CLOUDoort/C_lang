#include <stdio.h>

int calculate_sum(int*a);

int main() {
    int sum, i, ave;

    int num[10];

    for(i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    sum = calculate_sum(num);
    ave = sum / 10;

    printf("%d\n",ave);

    return 0;
}

int calculate_sum(int*a) {
    int sum = 0, i;

    for(i = 0; i < 10; i++) {
        sum += a[i];
    }

    return sum;
}