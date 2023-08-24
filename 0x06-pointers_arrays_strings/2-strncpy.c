#include "main.h"

/**
 * _strncpy - copies a string.
 *
 * @dest: destination of copy
 * @src: source of copy
 * @n: number of char to copy
 *
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{   int i, size = 0;
    for (i = 0; (src[i] != '\0' && i < n); i++)
    {
        dest[i] = src[i];
    }
    for (; (i < n); i++)
        {
            dest[i] = '\0';
        }
    return (dest);
}