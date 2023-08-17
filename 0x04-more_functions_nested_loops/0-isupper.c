#include "main.h"
/**
 * _isupper - check if char is capital
 * @c: is the char to be checked
 * Return: 1 if c is captial, 0 if not.
*/
int _isupper(int c)
{
	char d;

	if (d >= 'A' &&  d <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
