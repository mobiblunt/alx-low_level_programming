#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string to concatenate.
 * @s2: the second string to concatenate.
 *
 * Return: a pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
char *concat = (char *) malloc(strlen(s1) + strlen(s2) + 1);
if (concat == NULL)
{
return (NULL);
}
strcpy(concat, s1);
strcat(concat, s2);
return (concat);
}
