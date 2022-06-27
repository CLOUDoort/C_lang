#include <stdio.h>
int main() {
	int x = 75; // 1001011, 1011111, 1001010, 1000111

	int mask;
	mask = 1 << 6; // 1000000
    // 0100000

    // 0010000, 0001000, 0000100

    // 0000100 0000001

	printf("1번 답%d\n", x & mask >> 1);
	printf("2번 답%d\n", x | mask >> 2, x | mask >> 3, x | mask >> 4);
	printf("3번 답%d\n", x ^ mask >> 4, x ^ mask >> 6);
	printf("4번 답%d\n", x ^ mask >> 3, x ^ mask >> 4);

	return 0;
}