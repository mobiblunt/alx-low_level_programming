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
int i, j;
for (i = 1; i < 10; i++)
{
for (j = i; j < 10; j++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
putchar(j + '0');
if (i != 9 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
