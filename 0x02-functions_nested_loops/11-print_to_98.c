#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - print function
 *
 * @n: counter parameter
 *
 * Return: always 0.
*/
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i == 98)
		break;
		_putchar(',');
		_putchar(' ');
	}
	}

	else if (n >= 98)
	{
	for (i = n; i >= 98; i--)
	{
		printf("%d", i);
		if (i == 98)
		break;
		_putchar(',');
		_putchar(' ');
	}
	}
	return (0);
}
