#include "main.h"
/**
 * print_last_digit - check if char is alphabet
 * @c: is the char to be checked
 * Return: always c .
*/
int print_last_digit(int c)
{
	if (c < 0)
		c = -c;
	c = c % 10;
	_putchar('0' + c);
	return (c);
}
