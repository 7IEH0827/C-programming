#include <stdio.h>

int main(void)
{
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = { 7, 8, 9, 10, 11, 12 };
	int* ptr1 = arr1;
	int* ptr2 = arr2;
	int i, num;
	printf("arr1: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	printf("\narr2: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);
	printf("\n\nafter swap\n");
	for (i = 0; i < 6; i++)
	{
		num = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = num;
		ptr1++;
		ptr2++;
	}
	printf("arr1: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	printf("\narr2: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);
	printf("\n");
	return 0;
}