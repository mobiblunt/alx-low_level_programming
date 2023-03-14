#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to new string or NULL if failure
 */
char *argstostr(int ac, char **av)
{
int i, j, k;
char *str;
int len = 0;
int total_len = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
len = 0;
while (av[i][len])
{
len++;
total_len++;
}
total_len++;
}
str = malloc((total_len + 1) * sizeof(char));
if (str == NULL)
return (NULL);
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';
return (str);
}
