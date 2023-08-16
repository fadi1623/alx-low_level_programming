#include "main.h"
/**
 * _islower - check if char is lowercase
 * @ch: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
*/
int _islower(int c)
{
	char ch;

	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return  (0);
}
