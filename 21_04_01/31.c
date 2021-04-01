#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//10진수를 입력받아 8진수(octal)로 출력해보자.

int main(void)
{
	int num;
	scanf("%d", &num);
	printf("oX\n", num); //%o를 사용하면 8진수로 출력.
	return 0;
}
