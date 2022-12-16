#include "main.h"

/**
 *print_most_numbers - prints numbers
 * Return: excluding 2 and 4 print out 0 - 9
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if ((c == 2 || c == 4))
		continue;

		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
