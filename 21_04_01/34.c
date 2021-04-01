#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//8진수로 입력된 정수 1개를 10진수로 바꾸어 출력.
int main(void)
{
	int num;
	scanf("%o", &num);//%o로 입력받으면 8진수로 인식시켜 저장시킬 수 있다.
	printf("%d\n", num);
	return 0;

}
