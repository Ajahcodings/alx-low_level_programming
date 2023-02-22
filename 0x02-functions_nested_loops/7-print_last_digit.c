#include "main.h"

/**
 * print _last_digit - a function that prints the last digit of a number
 * @n: integer to be accepted
 * Description: Determine last digit of n by
 * isolating remainder of n / 10
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		n = -n;
	ld = n % 10;

	if (ld < 0)
		ld = -ld;
	_putchar(ld + '0');

	return (ld);
}
