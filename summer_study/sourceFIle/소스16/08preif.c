#include <stdio.h>

//상수 정의
#define WINDOWS 1
#define MAC 2
#define UNIX 3
//#define SYSTEM WINDOWS
#define SYSTEM WINDOWS

//전처리 #if #elif #else #endif
#if (SYSTEM == WINDOWS) 
typedef int my_int;
#elif SYSTEM == MAC
typedef long my_int;
#elif SYSTEM == UNIX
typedef long long my_int;
#else 
typedef short my_int;
#endif

int main(void)
{
	my_int n = 17;
	printf("변수크기: %zu, 저장 값: %d\n", sizeof(n), n);

	return 0;
}
