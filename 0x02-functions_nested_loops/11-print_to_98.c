#include "main.h"
#include<stdio.h>
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
		printf("%d", n);
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
		printf("%d", n);
		if (n == 98)
		break;
		_putchar(',');
		_putchar(' ');
	}
	}
}
