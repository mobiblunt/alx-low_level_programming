#include "main.h"

/**
 * _islower - Entry point
 *
 * This program prints a message to the console
 * 
 * @c - returns int
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
