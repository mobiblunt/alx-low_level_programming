#include <stdlib.h>
#include "main.h"

/**
 * free_dog - frees dynamically allocated memory for a dog_t struct
 * @d: pointer to the dog_t struct to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
