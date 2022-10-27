#include "main.h"

/**
 * reverse_array -> reversing an array
 * @a: array a
 * @n: an element of an array
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
