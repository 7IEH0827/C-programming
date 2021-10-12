#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, i;
	int result = 0;
	int count = 0;
	printf("Please enter a number: ");
	scanf("%d", &num);
	for (i = num - 1; i > 1; i--)
	{
		result = num % i;
		if (result == 0)
			count++;
	}
	switch (count)
	{
	case 0:
		printf("It is a prime number. \n");
		break;
	default:
		printf("It is not a prime number. \n");
	}
	return 0;
}