#include <stdio.h>

struct city
{
	char name[50]; 
	char country[50]; 
	char people[50]; 
};

int main(void)
{
	struct city arr[3];
	int i;
	printf("Input three cities:\n");
	for (i = 0; i < 3; i++) 
	{
		printf("Name> ");
		fgets(arr[i].name, sizeof(arr[i].name), stdin);
		arr[i].name[strlen(arr[i].name) - 1] = '\0';
		printf("Country> ");
		fgets(arr[i].country, sizeof(arr[i].country), stdin);
		arr[i].country[strlen(arr[i].country) - 1] = '\0';
		printf("Population > ");
		fgets(arr[i].people, sizeof(arr[i].people), stdin);
		arr[i].people[strlen(arr[i].people) - 1] = '\0';
	}
	printf("\nPrinting the three cities:\n");
	for (i = 0; i < 3; i++) 
	{
		printf("%d. %s in %s with a population of %s people\n", i+1, arr[i].name, arr[i].country, arr[i].people);
	}
	printf("\n");
	return 0;
}