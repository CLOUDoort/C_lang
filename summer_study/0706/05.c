#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void ascending(char arr[][100], int n);

int main()
{
    int i, n;
    char arr[10][100];

    while(1) {
        scanf("%d", &n);
        if(n <= 10) break;
    }


    for(i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    ascending(arr, n);


    for(i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

void ascending(char arr[][100], int n) {
    char temp[100] = {0};
    for(int i = 0; i < n - 1; i++) {
        for(int j = i; j < n - i; j++) {
            if(strncmp(arr[i], arr[i+1], 1) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[i+1]);
                strcpy(arr[i+1], temp);
            }
        }
    }
}

