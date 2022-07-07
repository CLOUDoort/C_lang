#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct
{
	char fname[100];
	int calories;
}Food;

int totalCalories(Food ary[], int size);

int main(void) {

	int i = 0;
	char c[100] = " "; // 초기화 필수, 비어있는 값
	Food arr[100] = {}; // 초기화 필수


	while (1) {
		scanf("%s", c);
		if ((strcmp(c, "quit"))) {
			strcpy(arr[i].fname, c);
		}
		else {
			break;
		}
		getchar(); // 개행문자 없애준다. 이거 안해주면 쓰레기 값이 나온다.
		scanf("%d", &arr[i].calories);
		i++;
	}
	int size = i + 1;

	int total = totalCalories(arr, size);

	printf("%d", total);
}

int totalCalories(Food ary[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += ary[i].calories;
	}

	return sum;
}