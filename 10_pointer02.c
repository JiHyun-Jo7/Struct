#include <stdio.h>
#include <stdlib.h>

struct contact {
	char name[20];
	char phone[20];
	int ringtone;
};

int main()
{
	struct contact ct = { "Mike", "0101010101", 0 };
	struct contact *ptr = &ct;

	ptr->ringtone = 5;

	strcpy(ptr->phone, "1111111111");
	printf("Name: %s\n", ptr->name);
	printf("Phone: %s\n", ptr->phone);
	printf("Ringtone: %d\n", ptr->ringtone);

	return 0;
}