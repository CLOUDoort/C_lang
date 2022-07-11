#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	char file1[100] = "";
	char file2[100] = "";

	FILE *f1, *f2;

	scanf("%s", file1);
	scanf("%s", file2);

	if ((f1 = fopen(file1, "r")) == NULL) {
		exit(1);
	}
	if ((f2 = fopen(file2, "w")) == NULL) {
		exit(1);
		fclose(f1);
	}


	char c;
	int sum = 0;

	while ((c = fgetc(f1)) != EOF) {
		if (isdigit(c) != 0) {
			fputc(c, f2);
			sum += (int)c - 48;
		}
	}

	printf("%d", sum);

	fclose(f1);
	fclose(f2);

	return 0;
}