#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* fname1 = "old.c";
	char* fname2 = "new.c";

	rename("score.bin", "score");

	//printf("파일 %s가 %s로 수정되었습니다.\n", fname1, fname2);

	return 0;
}
