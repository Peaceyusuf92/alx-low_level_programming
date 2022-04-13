#include "main.h"
/**
 * _isalpha - check for lower case letter
 * @c: character to check
 * Return: 0 or 1
 */

in _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
