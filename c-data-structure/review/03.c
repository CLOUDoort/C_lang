#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    char arr[][1000] = {""};

    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    for(int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}