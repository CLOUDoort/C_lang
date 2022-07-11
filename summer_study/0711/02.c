#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	char inputname[1000] = "";
	char outputname[1000] = "";
	FILE *f1, *f2;
	scanf("%s", inputname);
	scanf("%s", outputname);

	if ((f1 = fopen(inputname, "r")) == NULL) {
		exit(1);
	}
	if ((f2 = fopen(inputname, "r")) == NULL) {
		exit(1);
		fclose(f1);
	}
	
	char c;

	while ((c = fgetc(f1)) != EOF) {
		if (isalpha(c)) {
			if (islower(c)) {
				c = toupper(c);
				fputc(c, f2);
			}
			else {
				fputc(c, f2);
			}
		}
		printf("%c", c);
	}

	fclose(f1);
	fclose(f2);

	return 0;
}