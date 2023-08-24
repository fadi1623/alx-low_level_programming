#include "main.h"
/**
 * main - Entry point
 *
 * Descriptiom : print_alphabet - utilizes on the _putchar function to print
 * @parameter: describe the parameter
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
