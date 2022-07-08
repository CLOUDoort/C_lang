#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[100];
	char tel[100];
}INFO;


int main() {
	int n;
	scanf("%d", &n);

	INFO a[10] = {" "};
	for (int i = 0; i < n; i++) {
		scanf("%s", &a[i].name);
		getchar();
		scanf("%s", &a[i].tel);
	}

	char ch[30] = " ";
	scanf("%s", ch);
	for (int i = 0; i < n; i++) {
		if (!(strcmp(ch, a[i].name))) {
			printf("%s", a[i].tel);
		}
	}
}