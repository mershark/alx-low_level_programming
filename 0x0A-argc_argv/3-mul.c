#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: count arguemnts
 * @argv: arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
