#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    gets(input);

    char* ptoken = strtok(input, " ");

    while(ptoken) {
        for(int i = 0, j = (int)strlen(ptoken) - 1; i < j; i++, j--) {
            char c = ptoken[i];
            ptoken[j] = ptoken[i];
            ptoken[i] = c;
        }
        printf("%s", ptoken);
        ptoken = strtok(NULL, " ");
    }
}