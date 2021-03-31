#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//입력되는 시:분:초 에서 분만 출력해보자.

int main(void)
{
	int h, m, s;
	scanf("%d:%d:%d", &h, &m, &s); //콜론을 사이에 둔 형식으로 입력.
	printf("%d\n", m);
	return 0;
}
