#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
	int hour;
	int min;
	int sec;
} TIME;

TIME elapsedTime(TIME start, TIME end);

int main() {
	TIME start, end;


	scanf("%d:%d:%d", &start.hour, &start.min, &start.sec);

	scanf("%d:%d:%d", &end.hour, &end.min, &end.sec);

	TIME run = elapsedTime(start, end);

	printf("%02d:%02d:%02d", run.hour, run.min, run.sec);
}

TIME elapsedTime(TIME start, TIME end) {
	TIME run;
	int srunsec = (start.hour * 3600) + (start.min * 60) + (start.sec);
	int erunsec = (end.hour * 3600) + (end.min * 60) + (end.sec);

	int subrun = erunsec - srunsec;

	run.hour = subrun / 3600;
	run.min = (subrun % 3600) / 60;
	run.sec = subrun % 3600 % 60;

	return run;
}