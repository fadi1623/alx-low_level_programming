#include "main.h"
/**
 * print_to_98 - print function
 *
 * @n: counter paramete
 *
 * Return: always n .
*/
void print_to_98(int n)
{

	if (n < 98)
	{
	for (; n <= 98; n++)
	{
		_putchar('0' + n);
		if (n == 98)
		break;
		_putchar(',');
		_putchar(' ');
	}
	}

	else if (n > 98)
	{
	for (; n >= 98; n--)
	{
		_putchar('0' + n);
		if (n == 98)
		break;
		_putchar(',');
		_putchar(' ');
	}
	}
}
