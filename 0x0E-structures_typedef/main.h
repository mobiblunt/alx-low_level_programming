#ifndef MAIN_H
#define MAIN_H
#include "dog.h"

/**
 * init_dog - initializes a dog struct with the given values
 * @d: pointer to the dog struct to be initialized
 * @name: name of the dog (string)
 * @age: age of the dog (float)
 * @owner: owner of the dog (string)
 *
 * Description: This function initializes a dog struct with the given name,
 *              age, and owner values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints the values of struct dog
 * @d: pointer to struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d);

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - frees dynamically allocated memory for a dog_t struct
 * @d: pointer to the dog_t struct to free
 *
 * Return: void
 */
void free_dog(dog_t *d);


#endif
