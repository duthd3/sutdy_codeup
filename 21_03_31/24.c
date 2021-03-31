#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	char str[21];
	scanf("%s", str);
	int i = 0;

	while (str[i] != '\0')
	{
		printf("'%c'\n", str[i]);
		i++;
	}
	return 0;
}
