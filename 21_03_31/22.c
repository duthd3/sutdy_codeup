#include<stdio.h>


//공백문자 포함되어있는 문장 입력,출력
int main(void) {
	char str[2001];
	fgets(str, 2000, stdin);
	printf("%s", str);
	return 0;
}
