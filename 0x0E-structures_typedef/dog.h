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
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *val);
char *_strcpy(char *destination, char *source);

#endif
