#include "main.h"

/**
 * _islower -> check if the character is a lowercase character
 * @c: defines a character
 * Return: 1 if c is lowercase and 0 if not
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
