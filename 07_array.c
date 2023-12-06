#include <stdio.h>

typedef struct contact
{
	char name[20];
	char phone[20];
	int ringtone;
}CONTACT;

int main()
{
	CONTACT arr[] = {
		{"Mike", "0101010101", 5},
		{"Sam", "0202020202", 1},
		{"Emma", "0303030303", 7}
	};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i;

	printf("  Name        Phone    Ringtone\n");

	for (i = 0; i < size; i++)
	{
		printf("%6s %14s %5d\n", arr[i].name, arr[i].phone, arr[i].ringtone);
	}
	return 0;
}