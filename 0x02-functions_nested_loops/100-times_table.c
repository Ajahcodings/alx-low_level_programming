#include "main.h"

/**
 * print_times_table - a function that prints the n times
 * table, starting with 0.
 * @n: number to create table for
 * Description: Using nested loops, prints computes and
 * prints n times table.
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = y * x;
				if (y == 0)
