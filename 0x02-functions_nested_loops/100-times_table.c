#include "main.h"
#include<stdio.h>
/**
 * print_times_table - print function
 *
 * @n: counter parameter
 *
 * Return: always 0.
*/
void print_times_table(int n)
{
	int i, j, k;

	if ((n <= 0) || (n > 15))
		putchar('\n');
	for (j = 0; j <= n; j++)
	{
	for (i = 0; i <= n; i++)
	{
		k = i * j;
		printf("%d", k);
		if (i == n)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	}
	putchar('\n');
}
