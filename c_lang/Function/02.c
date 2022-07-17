#include <stdio.h>

int prime(int n);

int main() {
    int n;
    scanf("%d", &n);

    int primeCount = prime(n);

    printf("%d", primeCount);

    return 0;
}

int prime(int n) {
    int ok = 2;
    for(int i = 5; i < n; i++) {
        if(n % 2 == 0) continue;
        for(int j = 3; j < n; j+=2) {
            if(i % j != 0) {
                ok++;
            }
        }
    }

    return ok;
}