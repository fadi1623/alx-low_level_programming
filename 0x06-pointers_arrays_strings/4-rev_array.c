#include "main.h"

/**
 * reverse_array - main function
 *
 * Description: 'reverse the elements of an array'
 *
 * @a: array
 * @n: the number of the element in the array
 */
void reverse_array(int *a, int n)
{int i;

    for (i = 0; i < n / 2; i++)
    { 
    char temp = a[i];
    a[i] = a[n - i - 1];
    a[n - i - 1] = temp;
    }
}