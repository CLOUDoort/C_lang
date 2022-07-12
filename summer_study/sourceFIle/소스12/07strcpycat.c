#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[80] = "Java";
	char source[80] = "C is a language.";

	printf("%s\n", strcpy(dest, source));
	//printf("%d\n", strcpy_s(dest, 80, source));
	//printf("%s\n", dest);
	printf("%s\n", strncpy(dest, "C#", 2));

	printf("%s\n\n", strncpy(dest, "C#", 3));
	//printf("%d\n", strncpy_s(dest, 80, "C#", 3));
	//printf("%s\n", dest);

	char data[80] = "C";

	printf("%s\n", strcat(data, " is "));
	//printf("%d\n", strcat_s(data, 80, " is "));
	//printf("%s\n", data);
	printf("%s\n", strncat(data, "a java", 2));
	//printf("%d\n", strncat_s(data, 80, "a proce", 2));
	//printf("%s\n", data);
	printf("%s\n", strcat(data, "procedural "));
	printf("%s\n", strcat(data, "language."));

	{
		char dest[5] = "C";
		char* destc = "C";

		strcpy(dest, "Java language"); 		//실행 시 오류발생
		strcpy(destc, " Java language"); 	//실행 시 오류발생
		strcat(dest, " is a language."); 	//실행 시 오류발생
		strcat(destc, " is a language."); 	//실행 시 오류발생
	}

	return 0;
}
