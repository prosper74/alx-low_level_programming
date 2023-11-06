#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @val: character to getstring
 * Return: returns length of val
 */

int _strlen(char *val)
{
	int i = 0;

	while (val[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - a function that copies the string pointed to by source
 * including the terminating null byte (\0), to the buffer pointed to by dest
 *
 * @destination: destination to copy strings to
 * @source: source is the string to copy
 *
 * Return: returns the pointer to dest
 */

char *_strcpy(char *destination, char *source)
{
	int counter;

	for (counter = 0; counter <= _strlen(source); counter++)
	{
		destination[counter] = source[counter];
	}

	return (destination);
}

/**
 * new_dog - a function that creates a new dog.
 * @name: variable that holds the	dog name
 * @age: variable that holds the dog age
 * @owner: variable that holds the dog owner name
 *
 * Return: pointer to the new dog (Success),
 * NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int length1 = _strlen(name), length2 = _strlen(owner);

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc(sizeof(char) * (length1 + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->owner = malloc(sizeof(char) * (length2 + 1));

	if (newDog->owner == NULL)
	{
		free(newDog);
		free(newDog->name);
		return (NULL);
	}

	_strcpy(newDog->name, name);
	_strcpy(newDog->owner, owner);
	newDog->age = age;

	return (newDog);
}
