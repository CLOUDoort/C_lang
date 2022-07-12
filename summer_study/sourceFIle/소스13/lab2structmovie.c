#include <stdio.h>

int main(void)
{
	//영화 정보 구조체 
	typedef struct movie
	{
		char* title;		//영화제목
		long long profit;	//흥행수익
	} movie;

	movie parasite;
	parasite.title = "기생충";
	parasite.profit = 310000000000;	//전 세계에서 3,100억 수익 

	printf("[%s] 총수익: %lld\n", parasite.title, parasite.profit);

	return 0;
}
