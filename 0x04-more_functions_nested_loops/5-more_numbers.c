#include "main.h"
/**
 * more_numbers - print numbers 10 times
 *
 * Return: 0.
*/
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
	}
}
