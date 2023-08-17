#include "main.h"
/**
 * _isdigit - check if c is a digit
 * @c: is the char to be checked
 * Return: 1 if c is captial, 0 if not.
*/
int _isdigit(int c)
{
	if (c >= '0' &&  c <= '9')
	{
		return (1);
	}
	else
		return (0);
}

