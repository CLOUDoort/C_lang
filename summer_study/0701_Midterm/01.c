#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int C, index = 1, guess;
    double F;
    scanf("%d", &C);
    F = (int)9.0/5.0 * C + 32;

    int fInt = F + 0.5;

    while(1) {
        scanf("%d", &guess);
        if(guess < fInt) {
            printf("small\n");
            index++;
        } else if(guess > fInt) {
            printf("large\n");
            index++;
        } else {
            printf("correct %d\n", index);
            break;
        }
    }

    return 0;
}