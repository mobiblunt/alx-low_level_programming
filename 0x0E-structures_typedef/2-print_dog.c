#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints the values of struct dog
 * @d: pointer to struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
char *name;
char *owner;
if (d == NULL)
return;

name = d->name != NULL ? d->name : "(nil)";
owner = d->owner != NULL ? d->owner : "(nil)";

printf("Name: %s\n", name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", owner);
}
