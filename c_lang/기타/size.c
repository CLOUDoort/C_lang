#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
        printf("sizeof(char) is %lu.\n", sizeof(char));
        printf("sizeof(short) is %lu.\n", sizeof(unsigned short));
        printf("sizeof(int) is %lu.\n", sizeof(int));
        printf("sizeof(long) is %lu.\n", sizeof(long));
        printf("sizeof(long long) is %lu.\n", sizeof(long long));
        printf("sizeof(float) is %lu.\n", sizeof(float));
        printf("sizeof(double) is %lu. \n", sizeof(double));
        printf("sizeof(long double) is %lu. \n", sizeof(long double));
        printf("int ranges from %d to %d. \n", INT_MIN, INT_MAX);
        printf("double ranges from %e to %e. \n", DBL_MIN, DBL_MAX);
        return 0;
}