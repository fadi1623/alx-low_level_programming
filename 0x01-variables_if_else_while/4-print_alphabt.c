#include <stdio.h>
/**
 * main - Entry point
 *
 * Descriptiom : A C code that prints from a to z without e and q
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
{
	if (i == 113 || i == 101)
	continue;
	else
{
	putchar(i);
}
}
	putchar('\n');

	return (0);
}
