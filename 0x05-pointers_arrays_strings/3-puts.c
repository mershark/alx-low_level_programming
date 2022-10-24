#include "main.h"

/**
 *_puts -> thi is a function that puts
 *@str: a param tot _puts function
 */
void _puts(char *str)
{
	for (*str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
