#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// int main() {
// 	int i, j, a, b;

// 	scanf("%d", &a); // 첫 번째 입력받은 수
// 	int arr[10000];
// 	arr[0] = a;

// 	if (a != 0) {
// 		for (i = 0;; i++) {
// 			scanf("%d", &b);
// 			if (b == 0) break;
// 			arr[i + 1] = b;
// 		}
// 		printf("%d\n", i+1);
// 		for (j = i; j >= 0; j--) {
// 			printf("%d ", arr[j]);
// 		}
// 	}
// 	else {
// 		printf("%d\n%d", 0, arr[0]);
// 	}
// 	return 0;
// }

void main() {
    int a[100];
    int count = 0;
    while(1) {
        scanf("%d", &a[count]);
        if(!a[count]) {
            break;
        }
        count++;
    }
    printf("%d\n", count);
    while(count) {
        printf("%d", a[--count]);
    }
}