#include "main.h"

int main(void)
{
	intn;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your line of code here ...
	 * remember:
	 * - You are not allowed to a
	 * - You are not allowed to modify p
	 * - only one statement
	 * - You are not allowed to code anything else than the line of expected line of code
	 */
	*(p + 5) = 98;
	/* ... so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}

