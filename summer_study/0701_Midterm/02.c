#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int index = 0;
    int a[1000], b[1000];
    char cal[1000];

    while(1) {
        scanf("%d", &a[index]);
        scanf("%c", &cal[index]);
        if(cal[index] == '!') break;
        scanf("%d", &b[index]);
        index++;
    }

    for(int i = 0; i < index; i++) {
        if(cal[i] == '+') {
            printf("%d%c%d=%d\n", a[i], cal[i], b[i], a[i] + b[i]);
        }
        if(cal[i] == '-') {
            printf("%d%c%d=%d\n", a[i], cal[i], b[i], a[i] - b[i]);
        }if(cal[i] == '*') {
            printf("%d%c%d=%d\n", a[i], cal[i], b[i], a[i] * b[i]);
        }if(cal[i] == '/') {
            if(b[i] == 0) printf("Error\n");
            else printf("%d%c%d=%.2f\n", a[i], cal[i], b[i], (double)a[i] / b[i]);
        }
    }
    return 0;
}