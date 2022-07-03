#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char scoreToGrade(int score);

int main() {
    int index = 0;
    int arr[1000];

    while(1) {
        scanf("%d", &arr[index]);
        if(arr[index] == -1) break;
        index++;
    }

    for(int i = 0; i < index; i++) {
        printf("%c\n", scoreToGrade(arr[i]));
    }
}

char scoreToGrade(int score) {
    if(score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 60) return 'D';
    else return 'F';
    }

