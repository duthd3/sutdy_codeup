#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//10진수 입력받아 16진수(대문자)로 출력
int main(void)
{
	int num;
	scanf("%d", &num);
	printf("%X \n", num);
	return 0;
}
