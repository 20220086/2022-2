#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float x, y, z = 0;
	float sum;
	printf("실수를 입력하시오:");
	scanf_s("%f", &x);

	printf("실수를 입력하시오:");
	scanf_s("%f", &y);

	printf("실수를 입력하시오:");
	scanf_s("%f", &z);

	sum = x + y + z;
	printf("합은 %f이고", sum);

	return 0;
}