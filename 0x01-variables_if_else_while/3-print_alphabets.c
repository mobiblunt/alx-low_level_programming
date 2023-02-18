#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints a message to the console
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char letter;
int i;
for (i = 0; i < 26; i++)
{
letter = 'a' + i;
putchar(letter);
}
for (i = 0; i < 26; i++)
{
letter = 'A' + i;
putchar(letter);
}
putchar('\n');
return (0);
}
