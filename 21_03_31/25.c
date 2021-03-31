#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//다섯 자리의 정수 1개를 입력받아 각 자리별로 나누어 출력한다.

int main(void)
{
	int num1, num2, num3, num4, num5;

	scanf("%1d%1d%1d%1d%1d", &num1, &num2, &num3, &num4, &num5); //%1d사용시 한자리씩 입력받을수 있다.
	printf("[%d]\n", num1 * 10000);
	printf("[%d]\n", num2 * 1000);
	printf("[%d]\n", num3 * 100);
	printf("[%d]\n", num4 * 10);
	printf("[%d]\n", num5 * 1);

	return 0;



}
