#include "main.h"

/**
 * _isalpha -> checks if the characters are uppcased
 * @c: this houses the characters
 * Return: returns 0 or 1 depending on the condition
 */

int _isalpha(int c);
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
