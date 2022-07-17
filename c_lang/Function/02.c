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
        int count = 0;
        if(i % 2 == 0) continue;
        for(int j = 2; j < n; j++) {
            if(i % j == 0) {
                count++;
            }
        }
        if(count == 0) {
            ok++;
        }
    }

    return ok;
}