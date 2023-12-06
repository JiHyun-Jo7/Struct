#include <stdio.h>
#include <string.h>

struct contact {
	char name[20];
	char phone[20];
	int ringtone;
};

int main()
{
	struct contact ct = {"Mike", "0123456789", 0};
	struct contact ct1 = { 0 }, ct2 = { 0 };

	ct.ringtone = 5;
	strcpy(ct.phone, "0101010101");
	printf("name : %s\n", ct.name);
	printf("phone: %s\n", ct.phone);
	printf("ringtone:%d\n", ct.ringtone);

	strcpy(ct1.name, "Sam");
	strcpy(ct1.phone, "0202020202");
	ct1.ringtone = 1;
	printf("name : %s\n", ct1.name);
	printf("phone: %s\n", ct1.phone);
	printf("ringtone:%d\n", ct1.ringtone);

	printf("name: ");
	scanf("%s", ct2.name);
	printf("phone: ");
	scanf("%s", ct2.phone);
	printf("ringtone(0~9): ");
	scanf("%d", &ct2.ringtone);

	printf("name: %s\n", ct2.name);
	printf("phone: %s\n", ct2.phone);
	printf("ringtone: %d\n", ct2.ringtone);

	return 0;
}
