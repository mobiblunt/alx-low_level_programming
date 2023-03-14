#include "main.h"
#include <stdlib.h>

/**
 * count_words - count the number of words in a string
 * @str: string to count words in
 *
 * Return: number of words in the string
 */
int count_words(char *str)
{
int i, count = 0;
for (i = 0; str[i]; i++)
{
if (str[i] != ' ')
{
count++;
while (str[i] && str[i] != ' ')
i++;
}
}
return (count);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words) or NULL on failure
 */
char **strtow(char *str)
{
char **words;
int i, j, k, len, word_count;
if (str == NULL || str[0] == '\0')
return (NULL);
word_count = count_words(str);
words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
for (i = 0, k = 0; i < word_count; i++)
{
while (str[k] == ' ')
k++;
len = 0;
while (str[k + len] && str[k + len] != ' ')
len++;
words[i] = malloc((len + 1) * sizeof(char));
if (words[i] == NULL)
{
for (j = 0; j < i; j++)
free(words[j]);
free(words);
return (NULL);
}
for (j = 0; j < len; j++)
words[i][j] = str[k + j];
words[i][len] = '\0';
k += len;
}
words[i] = NULL;
return (words);
}
