#include "main.h"

/**
 * print_line - prints lines
 * @n: number of lines to be printed
 * Return: 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
