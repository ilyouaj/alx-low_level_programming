#include "main.h"

/**
 * reset_to_98 - takes a pointers to an int parameter
 *		and updates the value it pointer to 98
 *
 * @n: int parameter
 *
 * Return: Nothing
 */
int main() {
	int number = 5;
	reset_to_98(&number);
	printf("%d\n", number);
	return 0;
}
