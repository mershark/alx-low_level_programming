#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straignt line using a character _.
 * @n: the number of _ characters to be printed out
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
	for (x = 0; x <= n; x++)
	{
	_putchar('95');
	}
	}
	_putchar('\n');
}
