#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* fname1 = "old.c";
	char* fname2 = "new.c";

	rename("score.bin", "score");

	//printf("���� %s�� %s�� �����Ǿ����ϴ�.\n", fname1, fname2);

	return 0;
}
