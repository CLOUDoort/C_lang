#include <stdio.h>

int main()
{
        int i;
        float f;

        scanf("%f", &f);

        i = (int)((f - (int)f)*100);

        if(i < 0){
                i = -i;
        }
        if(i == 0){
                printf("00\n");
                return 0;
        }

        printf("i=%d\n", i);
        return 0;
}