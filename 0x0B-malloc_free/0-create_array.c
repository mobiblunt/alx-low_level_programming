#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size of the array to create
 * @c: the character with which to initialize the array
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
char *arr = (char *) malloc(size * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
for (unsigned int i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
