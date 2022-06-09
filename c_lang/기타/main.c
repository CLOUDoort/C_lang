/* 제어문 - 조건문(if) 0316 시작
if(조건){
  명령문
}
else if (){
}
else {
}
*/

// 컴퓨터에서 어떠한 수를 0으로 나누는 것은 금지되어 있다.


// != 서로 다르면 참

/*논리연산자
&& 두 개 이상 조건식에 쓰이는 AND의 의미, 하나의 &는 숫자 사이의 AND 연산
|| OR 연산*/

/*반복문 for문
for(초기식, 조건식, 증감식){
	명령1
	명령2
	...
}
조건식 : 반복문이 얼마나 반복해야 할 지 알기 위해 제어변수를 둔다.
증감식 : 1회 실행시 변수의 값을 어떻게 만들어야 하는지 알려줌
for 문법은 {} 안에 작업들을 조건식이 성립할 동안 반복해주는 것, 매 반복마다 증감식을 실행한다*/

//#include <stdio.h>
//int main() {
//	int i;
//
//	for (i = 5; 4 <= i && i <= 20; i++) {
//		printf("숫자 : %d \n", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int i, sum = 0;
//
//	for (i = 0; i <= 10000; ++i) {
//		sum = sum + i;
//	}
//	printf("0부터 10000까지의 합 : %d \n", sum);
//
//	return 0;
//}


//#include <stdio.h>
//int main() {
//	int i;
//	int subject, score;
//	double sum_score = 0;
//
//	printf("몇 개의 과목 점수를 받을 것인가요? \n");
//	scanf("%d", &subject);
//
//	printf("\n 각 과목의 점수를 입력하세요 \n");
//	for (i = 1; i <= subject; i++) {
//		printf("과목 %d : ", i);
//		scanf("%d", &score);
//		sum_score = sum_score + score;
//
//	}
//
//	printf("전체 과목의 평균은 : %.2f점입니다. \n", sum_score / subject);
//
//	return 0;
//}

/* break 구문
#include <stdio.h>
int main() {
	int usranswer;

	printf("컴퓨터가 생각한 숫자를 맞추어 보세요! \n");

	for (;;) { // 초기식, 조건식, 증감식이 없으면 무한히 참이기 때문에 무한 반복된다.
		scanf("%d", &usranswer);
		if (usranswer == 3) { 
			printf("맞추셨군요! \n");
			break; // 3이 되면 무한 반복문을 깨준다.
		}
		else {
			printf("틀렸어요! \n"); // 3이 안나오면 영원히 이 글이 나온다.
		}
	}
	return 0;
}*/ // 수정

/* continue 
#include <stdio.h>
int main() {
	int i;

	for (i = 0; i < 100; i++) {
		if (i % 5 == 0) continue; // skip과 같은 역할
		
		printf("%d", i);
	}
	return 0;
}*/

/* while 
while(조건식){
	명령1
	명령2
	...
}

#include <stdio.h>
int main() {
	int i = 1, sum = 0;

	while (i <= 100) {
		sum += i;
		i++;
	}
	printf("1 부터 100 까지의 합: %d \n", sum);

	return 0;
}
*/

/* do - while 문
	do {
		명령1
		명령2
		...
		} while (조건식);

		-> 먼저 실행한 뒤에 조건식을 검사, 때문에 최소한 한 번은 실행되게 된다.
		
#include <stdio.h>
int main() {
	int i = 1, sum = 0;

	do {
		sum += i;
		i++;
	} while (i < 1);

	printf("sum : %d \n", sum);
	return 0; 
	// 먼저 실행하고 조건식을 검사했기 때문에 한 번 반복한 값인 1이 나올 수 있는 것
} */

