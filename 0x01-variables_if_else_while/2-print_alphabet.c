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
char c = 'a';
int i;
for (i = 0; i < 26; i++)
putchar(c + i);
putchar('\n');
return (0);
}
