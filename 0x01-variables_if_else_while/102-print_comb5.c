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
for (i = 0; i < 100; i++)
{
for (j = i; j < 100; j++)
{
if (i != j)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i != 99 || j != 98)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
