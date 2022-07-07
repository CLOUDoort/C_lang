#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct employee
{
	int num;
	char name[100];
	char adrs[100];
	int salary;
	double incentive;
}e;

int main() {

	e m[3];
    

	for (int i = 0; i < 3; i++) {
		scanf("%d", &m[i].num);
		scanf("%s", m[i].name); // 문자열이니까 &은 필요없다.
        
        getchar(); // 개행문자를 없애준다.

        gets(m[i].adrs);
		scanf("%d", &m[i].salary);
		scanf("%lf", &m[i].incentive);
	}

	for (int i = 0; i < 3; i++) {
		printf("%d\t%s\t%s\t%d\t%.f%%\t%.1f\n", m[i].num, m[i].name, m[i].adrs, m[i].salary, 100 * m[i].incentive, m[i].salary * (12 + m[i].incentive));
	}
	return 0;

}

// scanf로 먼저 값을 입력받은 후, gets로 추가 값을 입력받으려고 하면 제대로 동작하지 않는 에러가 발생한다. 쓰레기 값이 나올 확률이 매우 크다.
// scanf함수를 사용할 때, 값을 입력한 후 개행문자(enter)를 누르게 되는데 값은 넘어가고 개행문자는 입력버퍼에 남아있게 된다.
// 다음에 gets함수를 사용하는데 버퍼에 남아있는 개행문자를 가져오게 된다.
// 그리고 이 개행문자를 '사용자 입력의 끝'으로 인식하기 때문에 gets함수가 동작하지 않고 넘어가게 되는 것이다.

// 이를 해결하기 위해 getchar()를 사용하여 남아있는 \n을 사용해준다.