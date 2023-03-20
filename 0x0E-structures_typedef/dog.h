#ifndef DOG_H
#define DOG_H

/**
 * struct dog - represents a dog
 * @name: name of the dog (string)
 * @age: age of the dog (float)
 * @owner: owner of the dog (string)
 *
 * Description: This struct represents a dog and contains three fields.
 *
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - prints the values of struct dog
 *
 *
 * Return: void
 */
typedef struct dog dog_t;

#endif
