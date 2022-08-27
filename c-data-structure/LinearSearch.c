#include <stdio.h>

int LSearch(int arr[], int len, int target) {
    int i;
    for(i = 0; i < len; i++) {
        if(arr[i] == target) {
            return i;
        }
        return -1;
    }

    return 0;
}

int main() {
    int ar[] = {3, 5, 2, 4, 9};

    int idx;

    idx = LSearch(ar, sizeof(ar)/sizeof(int), 4);
    if(idx == -1) printf("탐색 실패 \n");
    else printf("타겟 저장 인덱스 : %d \n", idx);

    return 0;
}