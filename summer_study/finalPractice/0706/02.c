#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];
    gets(input);
    int arr[1000] = {0};

    for(int i = 0; i < (int)strlen(input); i++) {
        for(int j = 65; j < 123; j++) {
            if(input[i] == j) {
                arr[j-65]++;
            }
        }
    }
    for(int i = 0; i <= 58; i++) {
        if(arr[i] != 0) {
            printf("%c:%d\n", i + 65, arr[i]);
        }
    } 
}