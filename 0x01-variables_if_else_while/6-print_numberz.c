#include <stdio.h>
/**
 * main - Entry point
 *
 * Descriptiom : A C code that prints from 0 to 10
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
{
	putchar(48 + i);
}
	putchar('\n');

	return (0);
}
