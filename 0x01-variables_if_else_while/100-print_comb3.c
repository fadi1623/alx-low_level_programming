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
	int i, j;

	for (i = 0; i <= 9; i++)
	{
	for (j = i + 1; j <= 9; j++)
		{
			if (i == j)
			{
			continue;
			}
			putchar('0' + i);
			putchar('0' + j);
			if (i == 8 && j == 9)
			{
			continue;
			}
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
