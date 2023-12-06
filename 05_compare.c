#include <stdio.h>
#include <string.h>

struct contact {
	char name[20];
	char phone[20];
	int ringtone;
};

int main()
{
	struct contact ct1 = {"Mike", "0101010101", 5 };
	struct contact ct2 = ct1;

	printf("ct1: %s, %s, %d\n", ct1.name, ct1.phone, ct1.ringtone);
	printf("ct2: %s, %s, %d\n\n", ct2.name, ct2.phone, ct2.ringtone);

	if (strcmp(ct1.name, ct2.name) == 0 && strcmp(ct1.phone, ct2.phone) == 0
		&& ct1.ringtone == ct2.ringtone)
	{
		printf("ct1 is same as ct2. \n");
	}
	else
	{
		printf("ct1 is different with ct2. \n");
	}
	return 0;
}