#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float x, y, z = 0;
	float sum;
	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf_s("%f", &x);

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf_s("%f", &y);

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf_s("%f", &z);

	sum = x + y + z;
	printf("���� %f�̰�", sum);

	return 0;
}