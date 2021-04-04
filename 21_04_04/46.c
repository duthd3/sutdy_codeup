#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	long long num1, num2, num3;
	scanf("%lld %lld %lld", &num1, &num2, &num3);
	printf("%lld \n", num1 + num2 + num3);
	printf("%.1f \n", (float)(num1 + num2 + num3) / 3);
	return 0;
}
