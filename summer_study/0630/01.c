#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b);

int main() {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	return printf("%d\n", gcd(a, b));

}

int gcd(int a, int b) {
	int i = 2;
	int cf = 1;

	while (1) {
		if (a % i == 0 && b % i == 0) {
			cf *= i;
			a /= i;
			b /= i;
			if (a % i != 0 || b % i != 0) i++;
		}
		else i++;
		if (i > a || i > b) break;
	}
	return cf;
}