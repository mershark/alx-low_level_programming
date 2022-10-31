#include "main.h"

/**
 * _strspn - Gets hte length of a prefix substring
 * @s: The sring to be searched
 * @accept: the prefix to be measured
 *
 * Return: The number of bytes in s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
	for (index = 0; accept[index]; index++)
	{
		if (*s == accept[index])
		{
			bytes++;
				break;
		}
		else if (accept[index + 1] == '\0')
			return (bytes);
	}
	s++;
	}
	return (bytes);
}
