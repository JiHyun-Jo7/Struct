#include <stdio.h>
#include <string.h>

struct contact {
	char name[20];
	char phone[20];
	int ringtone;
};

int main()
{
	struct contact ct1 = { "Mike", "0123456789", 5 };
	struct contact ct2 = ct1;

	printf("ct1 : Output Format of Mike\n");
	printf("name : %s\n", ct1.name);
	printf("phone: %s\n", ct1.phone);
	printf("ringtone:%d\n\n", ct1.ringtone);

	printf("ct2: Output Format\n");
	printf("name : %s\n", ct2.name);
	printf("phone: %s\n", ct2.phone);
	printf("ringtone:%d\n", ct2.ringtone);

	return 0;
}