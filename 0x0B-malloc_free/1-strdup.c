#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicate string
 */
char *_strdup(char *str)
{
if (str == NULL)
{
return (NULL);
}
char *dup = (char *) malloc(strlen(str) + 1);
if (dup == NULL)
{
return (NULL);
}
strcpy(dup, str);
return (dup);
}
