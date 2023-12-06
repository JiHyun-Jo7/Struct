#include <stdio.h>
#include <string.h>

struct contact {
	char name[20];
	char phone[20];
	int ringtone;
};

int main() 
{
	struct contact ct = { "Mike", "0101010101", 5 };
	struct contact ct1 = { "Sam", "0202020202", 3 };

	struct contact ct2 = ct1;
	printf("ct2 after initailizing with ct1: %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

	ct2 = ct;
	printf("ct2 after assignment with ct: %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

	return 0;
}
