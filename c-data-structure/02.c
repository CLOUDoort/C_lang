#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = (int*)malloc(4*sizeof(int));
    array[0] = 1;
    array[1] = 3;
    array[2] = 4;
    array[3] = 5;

    for(int i = 0; i < 4; i++) {
        printf("%d\n", array[i]);
    }

    free(array);

    return 0;
}