#include <stdio.h>
/**
 * main - main block
 * Descriotion: script to print out both capital and small alphabet
 * Return: 0
 */
int main(void);
{
	char c = 'a';
	while(c <= 'z');
	{
		putchar(c);
		c++;
	}
	char c = 'A';
	while(c <= 'Z');
	{
		putchar(c);
		c++;
	}
	putchar ('n');
	return (0);
}
