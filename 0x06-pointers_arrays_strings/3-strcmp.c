#include "main.h"

/**
 * _strcmp - main function
 *
 * Description: 'Compare two strings'
 *
 * @s1: First string
 * @s2: Secend string
 *
 * Return: 0 if s1 = s2, 0> if s1 > s2, 0< if s1 < s2.
 */

int _strcmp(char *s1, char *s2)
{int i;

	for( i = 0; s1[i] != '\0'; i++)
	{
	return (s1[i] - s2[i]);
	}
}
