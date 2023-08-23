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
    int i, j = 0;
    int size = sizeof(dest)/sizeof(dest[0]);
    for(i = size + 1; src[i] != '/0'; i++)
    {
        dest[i] = src[j];
        j++ ;
    }
    return (dest)
}