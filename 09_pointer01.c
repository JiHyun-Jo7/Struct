#include <stdio.h>

struct test {
	int a, b;
};

int main() {
	struct test st;
	struct test *ptr;

	ptr = &st;

//	(*ptr).a = 1;
//  (*ptr).b = 2;

	ptr->a = 1;
	ptr->b = 2;

	printf("Member a of st: %d\n", st.a);
	printf("Member b of st: %d\n", st.b);

	return 0;
}