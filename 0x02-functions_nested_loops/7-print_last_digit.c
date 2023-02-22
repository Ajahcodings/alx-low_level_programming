#include "main.h"

/**
 * print _last_digit - print last digit of number
 * @n: number from which to extract last digit
 *
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
