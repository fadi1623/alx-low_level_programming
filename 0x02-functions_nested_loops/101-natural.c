#include "main.h"

/**
 * main - Entry point
 *
 * Description: sum of mult of 3 and 5
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			j = i + j;
	}
	printf("%d\n", j);

	return (0);
}
