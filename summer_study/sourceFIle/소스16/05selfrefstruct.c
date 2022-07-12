#include <stdio.h> 
#include <stdlib.h>

struct selfref { //자기참조 구조체 정의
	int n;
	struct selfref* next; //struct selfref one;	//컴파일 오류 발생
};

int main(void)
{
	//① 우선 구조체 struct selfref를 하나의 자료형인 list 형으로 정의
	typedef struct selfref list;

	//② 두 구조체 포인터 변수 first와 second를 선언한 후, 
	//   함수 malloc()을 이용하여 구조체의 멤버를 저장할 수 있는 저장공간을 할당
	list* first = NULL, * second = NULL;
	first = (list*) malloc( sizeof(list) );
	second = (list*) malloc( sizeof(list) );

	//③ 구조체 포인터 first와 second의 멤버 n에 각각 정수 100, 200을 저장하고,
	//   멤버 next에는 각각 NULL을 저장
	first->n = 100;
	second->n = 200;
	first->next = second->next = NULL;

	//④ first 다음에 second를 연결
	first->next = second; //구조체 *first가 다음 *second 구조체를 가리키도록 하는 문장 

	printf("%p\n", first);
	printf("%d %p\n", first->n, first->next);
	printf("%d\n\n", first->next->n);

	printf("%p\n", second);
	printf("%d %p\n", second->n, second->next);

	free(first); //동적메모리 할당 해제
	free(second);

	return 0;
}