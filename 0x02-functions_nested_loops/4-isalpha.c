#include "main.h"
/**
 * _isalpha - check if char is alphabet
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
*/
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return  (0);
}
