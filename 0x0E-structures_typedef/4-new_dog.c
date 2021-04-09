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
int dgname, dgowner, i;
dog_t *ndog;
ndog = (dog_t *)malloc(sizeof(dog_t));
if (ndog == NULL)
return (NULL);
dgname = dgowner = 0;
while (name[dgname++])
;
while (owner[dgowner++])
;
ndog->name = malloc(dgname *sizeof(ndog->name));
if (ndog->name == NULL)
{
free(ndog);
return (NULL);
}
for (i = 0; i <= dgname; i++)
ndog->name[i] = name[i];
ndog->age = age;
ndog->owner = malloc(dgowner * sizeof(ndog->owner));
if (ndog->owner == NULL)
{
free(ndog->name);
free(ndog);
return (NULL);
}
for (i = 0; i <= dgowner; i++)
ndog->owner[i] = owner[i];
return (ndog);
}
