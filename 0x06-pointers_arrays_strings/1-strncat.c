#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * @dest: destination input
 * @src: source input
 * @n: number of char to concat
 *
 * Return: pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{   int size = 0;
    int i, j;

    for (j = 0; dest[j] != '\0'; j++)
    {
        size++;
	}

    for (i = 0; (src[i] != '\0' && i < n); i++)
    {
        dest[size + i] = src[i];
    }
    return (dest);
}