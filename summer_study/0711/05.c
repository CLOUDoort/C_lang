#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[30];
    int A;
    int B;
    int C;
    double ave;
}student;

int main(void) {
    FILE *f;
    student arr[100];
    char fname[100];
    scanf("%s", fname);

    if((f = (fopen(fname, "r"))) == NULL) {
        exit(1);
    }

    char c;
    int i = 0;
    double sum[100];

    while((c = fgetc(f)) != EOF) {
        fscanf(f, "%s", arr[i].name);
        fscanf(f, "%d", &arr[i].A);
        fscanf(f, "%d", &arr[i].B);
        fscanf(f, "%d", &arr[i].C);
        sum[i] = arr[i].A + arr[i].B + arr[i].C;
        arr[i].ave = sum[i] / 3;
        i++;
    }

    for(int j = 0; j < i; j++) {
        printf("%s\t%d\t%d\t%d\t%.2f\n", arr[j].name, arr[j].A, arr[j].B, arr[j].C, arr[j].ave);
    }

    fclose(f);
}