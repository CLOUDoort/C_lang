#include <stdio.h>

int count(int current, int today);

int main() {
    int my_money = 100000;
    int today;
    scanf("%d", &today);
    int money = count(my_money, today);

    printf("%d", money);
    return 0;
}

int count(int current, int today) {
    current += today;
    return current;
}
