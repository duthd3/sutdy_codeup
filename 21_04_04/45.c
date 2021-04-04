#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>

int main(void)
{
	long long num1, num2;
	scanf("%lld %lld", &num1, &num2);
	printf("%lld \n", num1 + num2);
	printf("%lld \n", num1 - num2);
	printf("%lld \n", num1 * num2);
	printf("%lld \n", num1 / num2);
	printf("%lld \n", num1 % num2);
	printf("%.2f \n", (float)num1 / num2);
	return 0;
}
