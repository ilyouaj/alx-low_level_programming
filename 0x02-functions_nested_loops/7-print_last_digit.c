#include "main.h"

/**
 * print-last_digit - print last digit of a number.
 *
 * @n: takes number input
 *
 * Return: lastDigit
*/

int print_last_digit(int n)
{
	int lasDigit;

	if (n < 0)
		lasDigit = -1 * (n % 10);
	else
		lasDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
