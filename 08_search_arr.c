#include <stdio.h>
#include <stdlib.h>
#define STR_SIZE 20

typedef struct contact
{
	char name[STR_SIZE];
	char phone[STR_SIZE];
	int ringtone;
}CONTACT;

int main()
{
	CONTACT arr[] = {
		{"Mike", "0101010101", 0},
		{"Sam", "0202020202", 1},
		{"Emma", "0303030303", 2},
		{"Maria", "0404040404", 3},
		{"Lucy", "0505050505", 4},
		{"Chris", "0606060606", 5}
	};

	int size = sizeof(arr) / sizeof(arr[0]);
	int i;
	char name[STR_SIZE];
	int index;

	printf("Enter Name: ");
	scanf("%s", name);

	index = -1;
	for (i = 0; i < size; i++)
	{
		if (strcmp(arr[i].name, name) == 0)
		{
			index = i;
			break;
		}
	}
	if (index >= 0)
	{
		printf("%s's phone number: %s\n", arr[index].name, arr[index].phone);
	}
	else
	{
		printf("No Result\n");
	}
	return 0;
}