#include "main.h"
/**
 * main - Entry point
 *
 * Descriptiom : print_alphabet - utilizes on the _putchar function to print
 * @parameter: describe the parameter
 *
 * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i <= 10; i++)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}

	_putchar('\n');
	}
}
