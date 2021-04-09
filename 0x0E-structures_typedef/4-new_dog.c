#include "dog.h"
#include <stdlib.h>

/**
* new_dog - creates a new dog.
* @name: pointer to a char for name of dog
* @age: age of dog
* @owner: pointer to a char for owner of dog
* Return: pointer to a new dog of type dog_t
**/
dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLen, ownerLen, i;
	dog_t *ndog;

	ndog = (dog_t *)malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	nameLen = ownerLen = 0;
	while (name[nameLen++])
		;
	while (owner[ownerLen++])
		;
	ndog->name = malloc(nameLen * sizeof(ndog->name));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i <= nameLen; i++)
		ndog->name[i] = name[i];
	ndog->age = age;
	ndog->owner = malloc(ownerLen * sizeof(ndog->owner));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (i = 0; i <= ownerLen; i++)
		ndog->owner[i] = owner[i];
	return (ndog);
}