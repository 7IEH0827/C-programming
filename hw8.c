#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[100];
	int len, i;
	int diff = 'a' - 'A';
	printf("Input> ");
	fgets(str1, sizeof(str1), stdin);
	len = strlen(str1);
	for (i = 0; i < len; i++)
	{
		if (str1[i] >= 'A' && str1[i] <= 'Z')
			str1[i] += diff;
		else if (str1[i] >= 'a' && str1[i] <= 'z')
			str1[i] -= diff;
	}
	printf("Output> %s \n", str1);
	return 0;
}