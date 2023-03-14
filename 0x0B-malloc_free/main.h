#ifndef CREATE_ARRAY_H
#define CREATE_ARRAY_H

/**
 * create_array - creates an array of char
 * @size: the size of the array to create
 * @c: the character with which to initialize the array
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicate string
 */
char *_strdup(char *str);

/**
 * str_concat - concatenates two strings.
 * @s1: the first string to concatenate.
 * @s2: the second string to concatenate.
 *
 * Return: a pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - creates a 2D array of integers and initializes them to 0
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the 2D array or NULL if failure
 */
int **alloc_grid(int width, int height);

/**
 * free_grid - frees a 2D grid previously created by alloc_grid
 * @grid: pointer to the 2D grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height);

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to new string or NULL if failure
 */
char *argstostr(int ac, char **av);

/**
 * count_words - count the number of words in a string
 * @str: string to count words in
 *
 * Return: number of words in the string
 */
int count_words(char *str);

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words) or NULL on failure
 */
char **strtow(char *str);

#endif /* CREATE_ARRAY_H */
