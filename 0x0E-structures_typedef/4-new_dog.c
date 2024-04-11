#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: A pointer of type dog_t to the new dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *created_dog = malloc(sizeof(dog_t));

	if (created_dog == NULL)
	{
		free(created_dog);
		return (NULL);
	}
	created_dog->name = name;
	if (created_dog->name == NULL)
	{
		free(created_dog);
		return (NULL);
	}
	created_dog->age = age;
	if (created_dog->age == NULL)
	{
		free(created_dog);
		return (NULL);
	}
	created_dog->owner = owner;
	if (created_dog->owner == NULL)
	{
		free(created_dog);
		return (NULL);
	}
	return (created_dog);
}
