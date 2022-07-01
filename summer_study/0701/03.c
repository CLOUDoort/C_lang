#include <stdio.h>

int main()
{
int i, j;
for(i = 1; i <= 9; i++) {
    for(j = 1; j <= 3; j++) {
        if(j < 3) printf("%d*%d=%d\t\t", j, i, j*i);
        else printf("%d*%d=%d", j, i, j*i);
    }
    printf("\n");
}
puts("");
for(i = 1; i <= 9; i++) {
    for(j = 4; j <= 6; j++) {
        if(j < 6) printf("%d*%d=%d\t\t", j, i, j*i);
        else printf("%d*%d=%d", j, i, j*i);
    }
    printf("\n");
}
puts("");
for(i = 1; i <= 9; i++) {
    for(j = 7; j <= 9; j++) {
        if(j < 9) printf("%d*%d=%d\t\t", j, i, j*i);
        else printf("%d*%d=%d", j, i, j*i);
    }
    printf("\n");
}
return 0;
}