#include <stdio.h>

int isPrime(int x)
{
int i;
if (x > 2) {
	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			return 0;
		}
	}
    return 1;

}
else if (x == 2) return 1;
else return 0;
}

int main() {

	int x;
	scanf("%d", &x);
	printf("%s\n", isPrime(x) ? "prime" : "not prime");
}
