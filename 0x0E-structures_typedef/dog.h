#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Data for dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: owner of the dog
 **/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - A new name for for the type struct dog
 **/

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
