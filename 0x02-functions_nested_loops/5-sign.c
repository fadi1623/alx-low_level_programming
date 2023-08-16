#include "main.h"
/**
 * _isalpha - check if char is alphabet
 * @n: is the char to be checked
 *
 * Return: 1 if char is greater than zero, return 0 if char is zero
 * otherwise -1.
*/
int print_sign(int n);
{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		else if (n == 0)
		{
			_putchar('0');
			return  (0);
		}
		else
		{
			_putchar('-');
			return  (-1);
		}
}
