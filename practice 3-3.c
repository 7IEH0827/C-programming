#include <stdio.h>

int main(void)
{
	int num;
	int result;
	printf("정수를 입력하세요: ");
	scanf("%d", &num);
	result = num * num;
	printf("%d의 제곱의 결과: %d \n", num, result);
	return 0;
}