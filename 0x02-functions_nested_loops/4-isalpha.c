#include "main.h"
/**
 * _isalpha - check for lower case letter
 * @c: character to check
 * Return: 0 or 1
 */

in _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
