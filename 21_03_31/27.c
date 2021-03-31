#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//년월일(yyyy.mm.dd)를 입력받아,

일월년(dd - mm - yyyy)로 출력해보자.

int main(void)
{
	int y, m, d;
	scanf("%d.%d.%d", &y, &m, &d);
	printf("%02d-%02d-%04d", d, m, y);
	return 0;
}
