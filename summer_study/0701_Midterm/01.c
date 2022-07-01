#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int C, index = 0, guess;
    double F;
    scanf("%d", &C);
    F = 9.0/5.0 * C + 32;

    while(1) {
        scanf("%d", &guess);
        if(guess < F) {
            printf("small");
            index++;
        }
        break;
    }
}