#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[100];
	char tel[100];
}INFO;

void input(INFO a[], int n);
char* search(INFO a[], int n, char c[]);

int main() {
	int n;
	scanf("%d", &n);

	INFO a[10] = { " " };

	input(a, n);

	char ch[100] = " ";
	scanf("%s", ch);
	
	printf("%s", search(a, n, ch));
}

void input(INFO a[], int n) {
	for (int i = 0; i < n; i++) {
		scanf("%s", &a[i].name);
		getchar();
		scanf("%s", &a[i].tel);
	}
}

char* search(INFO a[], int n, char c[]) {
	for (int i = 0; i < n; i++) {
		if (!(strcmp(c, a[i].name))) {
			return a[i].tel;
		}
	}
}

// 중요 포인트
// char형 함수로 리턴할 때, 포인터로 보내줘야 데이터를 온전히 보낼 수 있다.