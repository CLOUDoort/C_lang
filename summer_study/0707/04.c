#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
	double x;
	double y;
} point;

typedef struct
{
	double slope;
	double yintercept;
} line;

void print(point A, point B);

int main(void) {
	point A, B;
	scanf("%lf %lf", &A.x, &A.y); // AÁÂÇ¥
	scanf("%lf %lf", &B.x, &B.y); // BÁÂÇ¥

	print(A, B);
}

void print(point A, point B) {
	line a;

	a.slope = (B.y - A.y) / (B.x - A.x);
	a.yintercept = A.y - (a.slope * A.x);

	printf("%.1f %.1f", a.slope, a.yintercept);

}