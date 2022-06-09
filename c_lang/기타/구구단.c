#include <stdio.h>
int main() {
	int i, a;
	
	for (i = 1; i < 10; i++) {
		for (a = 1; a < 10; a++) {
			printf("구구단, %d x %d : %d \n", i, a, i * a);
		} 
		// return 0; => return을 넣으니 한 번만 반복되고 말음
	}
}
