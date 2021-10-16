#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Binary(int num)
{
	if (num == 1 || num == 0)
		printf("%d", num);
	else
	{
		Binary(num / 2);
		printf("%d", num % 2);
	}
}

int main(void)
{
	int n;
	printf("Please enter a number: ");
	scanf("%d", &n);
	Binary(n);
	printf("\n");
	return 0;
}