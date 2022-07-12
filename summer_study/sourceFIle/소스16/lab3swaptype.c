#include <stdio.h>

//자료형 int a, b의 교환 매크로, temp를 사용
#define SWAP_INT(a, b, temp)	\
		temp = a; a = b; b = temp;

#define SWAP_DOUBLE(a, b)	\
		double _temp = a; a = b; b = _temp;

//자료형을 지정하여 a, b의 교환 매크로, _swap_temp를 내부에서 지정해서 사용
#define SWAP_TYPE(type, a, b) \
	    { \
			type _swap_temp; \
			_swap_temp = (b); \
			(b) = (a); \
			(a) = _swap_temp; \
	    }

int main(void)
{
	int a = 50, b = 70, c;
	printf("%d %d\n", a, b);
	SWAP_INT(a, b, c);
	printf("%d %d\n", a, b);
	SWAP_TYPE(int, a, b);
	printf("%d %d\n", a, b);

	double x = 3.36, y = 7.18;
	printf("%.2f %.2f\n", x, y);
	SWAP_DOUBLE(x, y);
	printf("%.2f %.2f\n", x, y);
	SWAP_TYPE(double, x, y);
	printf("%.2f %.2f\n", x, y);

	return 0;
}
