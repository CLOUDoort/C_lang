#include <stdio.h>
#include <string.h>

#define CAPACITY 100
#define BUFFER_SIZE 20

char *names[CAPACITY];
char *numbers[CAPACITY];
int n = 0;

void add();
void find();
void status();
void delete();

int main() {
    char command[BUFFER_SIZE];
    while(1) {
        printf("$ ");
        scanf("%s", command);

        if(strcmp(command, "add") == 0) add();
        else if(strcmp(command, "find") == 0) find();
        else if(strcmp(command, "status") == 0) status();
        else if(strcmp(command, "delete") == 0) delete();
        else if(strcmp(command, "exit") == 0) break;
    }

    return 0;
}

void add() {
    int i = 0;
    char buf1[BUFFER_SIZE], buf2[BUFFER_SIZE];
    scanf("%s", buf1);
    scanf("%s", buf2);

    names[n] = strdup(buf1);
    numbers[n] = strdup(buf2);
    //buf1은 스택에 할당된 메모리(지역변수)이므로 add함수가 return되고 나면 소멸된다. 따라서 buf1에 저장된 문자열을 복제한 후 배열 name[0]에 복제된 배열의 주소를 저장해야 한다. 복제된 배열은 strdup함수 내에서 malloc으로 heap에 할당된 메모리이므로 add함수가 종료된 후에도 소멸하지 않는다.
    n++;

    printf("%s was added successfully.\n", buf1);
}

void find() {

}

void status() {

}

void delete() {

}