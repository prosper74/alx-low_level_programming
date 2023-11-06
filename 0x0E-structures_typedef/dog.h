#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dogs
 * @name: varaible to hold the dog's name
 * @age: variable to hold the dog's age
 * @owner: variable to hold the dog's owner name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_type - Typedef for struct dog
 */
typedef struct dog dog_type;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_type *new_dog(char *name, float age, char *owner);
void free_dog(dog_type *d);

#endif
