#include "main.h"
/**
 * _isupper - check if char is capital
 * @c: is the char to be checked
 * Return: 1 if c is captial, 0 if not.
*/
int _isupper(char c)
{
	if (c >= 'A' &&  c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
