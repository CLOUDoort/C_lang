#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char first[1000];
	char second[1000];

	while (1) {
		gets(first);
		int firstS = (int)strlen(first);
		if (5 <= firstS && firstS <= 10) {
			gets(second);
			int secondS = (int)strlen(second);
			if (5 <= secondS && secondS <= 10) {
				if ((int)strlen(first) == (int)strlen(second)) {
					if (strcmp(first, second) != 0) {
						printf("Retry\n");
					}
					else return printf("Done");
				}
				else {
					printf("Retry\n");
				}
			}
			else {
				printf("Retry\n");
			}
		}
		else  printf("Retry\n");
	}
}