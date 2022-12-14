#include "main.h"

/**
 * _isalpha -> checks if the characters are uppcased
 * @c: this houses the characters
 * Return: returns 1 for uppercased characters and 0 for others
 */

int _isalpha(int c);
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
