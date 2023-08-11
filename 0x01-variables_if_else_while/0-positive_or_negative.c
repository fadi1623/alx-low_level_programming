#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Descriptiom : This program will assign a random number n
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

if (n > 0)
{
	printf("%d is positive", n);
}
else if (n < 0)
{
	printf("%d is negative", n);
}
else
{
	printf("%d is 0", n);
}
	return (0);
}
