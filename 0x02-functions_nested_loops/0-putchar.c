#include "main.h"
/**
 * main - Entry point
 *
 * Descriptiom : A C code that checks last digit
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char arr[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(arr[i]);
	}

	putchar('\n');

	return (0);
}
