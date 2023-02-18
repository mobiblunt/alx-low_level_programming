#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * This program prints a message to the console
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
last_digit = abs(n) % 10;
if (last_digit > 5)
printf("%d and is greater than 5\n", last_digit);
else if (last_digit == 0)
printf("0 and is 0\n");
else
printf("%d and is less than 6 and not 0\n", last_digit);
return (0);
}
