#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sumMultiple(int start, int end, int m, int n);

int main()
{
    int start, end, m, n;
    scanf("%d", &start);
    scanf("%d", &end);
    scanf("%d", &m);
    scanf("%d", &n);

    return sumMultiple(start, end, m ,n);
}

int sumMultiple(int start, int end, int n, int m) {
    int i;
    int first = 0, second = 0, third = 0, fourth = 0, fifth = 0, sixth = 0;
    for(i = start; i < end; i++) {
        if(i % n == 0) {
            first += i;
        }
        if(i % m == 0) {
            second += i;
        }
        if(i % (n * m) == 0){
            third += i;
        }
        if(i % n == 0 || i % m == 0) {
            fourth += i;
        }
        if(i % m == 0 && i % n != 0) {
            fifth += i;
        }
        if(i % n != 0 && i % m != 0) {
            sixth += i;
        }
    }
    return printf("%d\n%d\n%d\n%d\n%d\n%d\n", first, second, third, fourth, fifth, sixth);
    
}

// 변수 초기화 꼭 하기