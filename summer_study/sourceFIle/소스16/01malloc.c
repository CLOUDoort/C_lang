#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi = NULL;
	
	pi = (int*) malloc( sizeof(int) ); 
	if (pi == NULL) 
	{
		printf("메모리 할당에 문제가 있습니다.");
		exit(1);
	};
	
	*pi = 7;
	printf("주소 값: *pi = %p, 저장 값: p = %d\n", pi, *pi);
		
	free(pi); 

	return 0;
}



