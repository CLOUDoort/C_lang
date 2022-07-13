#define _CRT_SECURE_NO_WARNINS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char inputname[1000];
    char outputname[1000];
    FILE *f1, *f2;

    scanf("%s", inputname);
    scanf("%s", outputname);

    if((f1 = fopen(inputname, "r")) == NULL) {
        exit(1);
    }

    if((f2 = fopen(outputname, "r")) == NULL) {
        fclose(f1);
        exit(1);
    }

    char c;

    while((c = fgetc(f1)) != EOF) {
        if(isdisit(c)) {
            if(isalpah(c)) {
                c = toupper(c)
                fputc(c, f2);
            }
        }
    }
}