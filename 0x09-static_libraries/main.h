#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/**
 * _islower - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _islower(int c);

/**
 * _isalpha - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isalpha(int c);

/**
 * _abs - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _abs(int n);

/**
 * _isupper - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */


int _isupper(int c);

/**
 * _isdigit - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isdigit(int c);

/**
 * _strlen - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen(char *s);

/**
 * _puts - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

void _puts(char *s);

/**
 * *_strcpy - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strcpy(char *dest, char *src);

/**
 * _atoi - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _atoi(char *s);

/**
 * *_strcat - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strcat(char *dest, char *src);

/**
 * *_strncat - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strncat(char *dest, char *src, int n);

/**
 * *_strncpy - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strcmp(char *s1, char *s2);

/**
 * *_memset - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_memset(char *s, char b, unsigned int n);

/***_memcpy
 * *_memcpy - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

char (char *dest, char *src, unsigned int n);

/**
 * *_strchr - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strchr(char *s, char c);

/**
 * _strspn - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

unsigned int _strspn(char *s, char *accept);

/**
 * *_strpbrk - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strpbrk(char *s, char *accept);

/**
 * *_strstr - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
 
char *_strstr(char *haystack, char *needle);

#endif /* MAIN_H */
