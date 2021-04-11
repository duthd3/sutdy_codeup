#include<stdio.h>

int main(void)
{
	int score;

	scanf_s("%d", &score);

	if (score >= 90 && score <= 100)
		printf("%c \n", 'A');
	else if (score >= 70 && score <= 89)
		printf("%c \n", 'B');
	else if (score >= 40 && score <= 69)
		printf("%c \n", 'C');
	else
		printf("%c \n", 'D');

	return 0;
}
