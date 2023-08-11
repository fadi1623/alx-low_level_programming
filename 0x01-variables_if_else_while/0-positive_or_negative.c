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
	printf("stored number is positive");
}
else if (n < 0)
{
	printf("stored number is negative");
}
else
{
	printf("stored number is 0");
}
	return (0);
}
