#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 20

int read_line(char str[], int limit);

int main(void) {
    char buffer[BUFFER_SIZE];
    while(1) {
        printf("$ ");
        int k = read_line(buffer, BUFFER_SIZE);
        printf("%s:%d\n", buffer, k);
    }

    return 0;
}

int read_line( char str[], int limit)   {
    int ch, i = 0;
    
    while((ch = getchar()) != '\n') {
        if(i < limit - 1) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}