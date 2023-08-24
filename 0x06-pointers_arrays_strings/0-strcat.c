#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate character in a string
 * @dest: char array string
 * @src: char to look for
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int size = 6;
	for (i = 0; src[i] != '\0'; i++)
	{
	dest[size + i] = src[i];
	}
	return (dest)
}