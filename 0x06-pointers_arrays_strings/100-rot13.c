#include <stdio.h>
#include "main.h"
/**
 * rot13 -main function
 *
 * Description: 'Encodes a string using rot13'
 *
 * @s: String to encode
 *
 * Return: coded string
 */

char *rot13(char *s)
{
    char set[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char change[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    int i, j;
     
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; set[j] != '\0'; j++)
        {
            if (set[j] == s[i])
            {
            s[i] = change[j];
            break;
            }
            else
            continue;
        }

    }
    return (s);
}