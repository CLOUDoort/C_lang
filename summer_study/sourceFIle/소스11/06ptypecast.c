#include <stdio.h> 

int main(void)
{
	//int value = 0x61626364;	// 61은 문자 'a'
	int value = 0x44434241;		// 41은 문자 'A'

	int* pi = &value;
	char* pc = (char*)&value;

	for (int i = 0; i <= 3; i++)
	{
		char ch = *(pc + i);
		printf(" *(pc+%d) %#x %3c %u\n", i, ch, ch, (uintptr_t)(pc + i));
	}

	return 0;
}
