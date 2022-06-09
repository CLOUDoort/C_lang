/*다음 식을 만족하는 자연수 a,b,c 의 개수를 구하여라
  i) a + b + c = 2000
  ii) a ＞ b > c, a,b,c 는 모두 자연수
  여기에 자연수는 0을 포함하지 않는다는 조건을 더한다.

  반만 해결
  반복횟수를 어떻게 구해야하는 지 몰랐음
  printf 대신 변수++ 해주면 됨
  응용, 복습 필수*/

// 내가 푼 방법

#include <stdio.h>
int main() {
	int a, b, c;
	int numCount = 0;


	for (a = 1997; a > 667; a--) {
		for (b = 2; b < a; b++) {
			for (c = 1; c < b; c++) {
				if (a + b + c == 2000) {
					/*printf("(%d, %d, %d)\n", a, b, c);*/
					numCount++;
				}
			}
		}
	}
	printf("다음 식을 만족하는 자연수 a,b,c 의 개수는 %d입니다.", numCount);

	return 0;
}

// 더 편한 방법

//#include <stdio.h> 
//int main() {
//	int a = 3, b = 2, c = 1;
//	int count = 0;
//
//	for (a = 3; a < 2000; a++) {
//		for (b = 2; b < a; b++) {
//			for (c = 1; c < b; c++) {
//				if (a + b + c == 2000) {
//					count++;
//				}
//			}
//		}
//	}
//	printf("다음 식을 만족하는 자연수 a,b,c 의 개수는 %d입니다.", count);
//	return 0;
//}

