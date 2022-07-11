#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	char fname[1000] = "";
	FILE* f;
	scanf("%s", fname);

	if ((f = fopen(fname, "r")) == NULL) {
		exit(1);
	}

	char c;

	while ((c = fgetc(f)) != EOF) {
		printf("%c", c);
	}

	fclose(f);
	return 0;
}