#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[5], i;
	printf("5개의 정수를 입력하세요: ");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("홀수 출력: ");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 != 0)
			printf("%d ", arr[i]);
	}
	printf("\n");
	printf("짝수 출력: ");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}