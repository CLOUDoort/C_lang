#include <stdio.h>
int main() {
	int x = 75;

	int mask1 = 1 << 6; // 1000000
	int mask2 = mask1 >> 1; // 0100000
	int mask3 = mask1 >> 2; // 0010000
	int mask4 = mask1 >> 3; // 0001000
	int mask5 = mask1 >> 4; // 0000100
	int maks6 = mask1 >> 5; // 0000010
	int mask7 = mask1 >> 6; // 0000001

	int maskNum1 = mask1 >> 1;
	int maskNum2 = mask3 | mask4 | mask5; // 0011100 // 1로 지정
	int maskNum3 = mask5 ^ mask7; // 0000101
	int maskNum33 = ~maskNum3; // 1111010
	int maskNum4 = x ^ mask4; // 1과 ^연산
	int maskNum44 = maskNum4 ^ mask5; // 1과 ^연산

	printf("%d\n", x & maskNum1);
	printf("%d\n", x | maskNum2); // 1로 지정 // 1과 |연산
	printf("%d\n", x & maskNum33); // 0으로 지정 / 0과 &연산
	printf("%d\n", maskNum44); // 반전 / 1과 ^연산

	return 0;
}
// 0으로 지정할 때 0과 &연산
// 1로 지정할 때 1과 |연산
// 반전시킬 때 1과 ^연산