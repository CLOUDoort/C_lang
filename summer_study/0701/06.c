#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int kineticEnergy(int weight, int velocity);

int main() {
    int weight, velocity;

    scanf("%d %d", &weight, &velocity);

    return printf("%d", kineticEnergy(weight, velocity));
}

int kineticEnergy(int weight, int velocity) {
    int KE;

    KE = 1.0/2.0 * weight * velocity * velocity;

    return KE;
}
