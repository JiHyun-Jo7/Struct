#include <stdio.h>

typedef struct food
{
	char name[10];
	int iPrice;
	int iCookTime;
	int iPreference;
}FOOD;

int main()
{
	FOOD Food = { "Noodle", 5000, 4, 5 };

	printf("Name: %s\n", Food.name);
	printf("Price: %d\n", Food.iPrice);
	printf("Cooking Time: %d\n", Food.iPreference);
	printf("Estimate: %d\n", Food.iPreference);

	return 0;
}