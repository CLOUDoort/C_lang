#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, a, b;
    int ok = 0; // 같은 지 확인
	i = 0;

	int arr1[5];
	int arr2[5];

    for( ;; ) {
        for (i = 0; i < 5; i++) {
		scanf("%d", &a);
		arr1[i] = a;
	    }
	    for (i = 0; i < 5; i++) {
		scanf("%d", &b);
		arr2[i] = b;
        if(arr1[i] == arr2[i]) {
                ok++;
            }
	    }
        if(ok == 5) {
            printf("same\n");
        } else {
            printf("not same\n");
        }
        break;
    }
    return 0;

}