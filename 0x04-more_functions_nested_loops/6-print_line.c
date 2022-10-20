#include "main.h"

/**
 * print_line -> printing line
 * @n: integer params
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
	for (x = 0; x <= n; n++)
	{
	_putchar('_');
	}
	}
	_putchar('\n');
}
