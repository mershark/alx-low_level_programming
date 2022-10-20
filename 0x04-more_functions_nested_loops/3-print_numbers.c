#include "main.h"

/**
 * print_numbers - Print numbers from 0-9.
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
	putchar((n % 10) + '0')
	}
	_putchar('\n');
}
