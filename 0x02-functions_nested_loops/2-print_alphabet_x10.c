#include "main.h"

/**
 * print_alphabet_x10 -> this prints the alpahets 10 times
 */

void print_alphabet_x10(void)
{
	int j;
	int i;

	for (i = 0; 1 < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
