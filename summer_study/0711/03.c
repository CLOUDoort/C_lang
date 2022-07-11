#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	char fname[1000] = "";
	scanf("%s", fname);
	FILE* f;

	if ((f = fopen(fname, "r")) == NULL) {
		exit(1);
	}

	int count = 0;
	char arr[1000] = "";
	int num;

	while (fscanf(f, "%d", &num) != EOF) {
		if (num >= 90) {
			arr[count] = num;
			count++;
		}
	}

	printf("%d\n", count);
	for (int j = 0; j < count; j++) {
		printf("%d\n", arr[j]);
	}
	fclose(f);

	return 0;
}