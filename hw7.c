#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double calculation(double* ptr)
{
	double sum = 0, result = 0, avarage = 0, middle = 0, variance = 0, stdv = 0;
	int i;
	for (i = 0; i < 5; i++)
		sum += *(ptr + i);
	avarage = sum / 5;
	sum = 0;
	for (i = 0; i < 5; i++)
	{
		middle = *(ptr + i) - avarage;
		result = pow(middle, 2);
		sum += result;
	}
	variance = sum / 5;
	stdv = sqrt(variance);
	return stdv;
}

int main(void)
{
	double arr[5], num;
	printf("Enter 5 real numbers: ");
	scanf("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	num = calculation(&arr);
	printf("Standard Deviation = %.3f \n", num);
}