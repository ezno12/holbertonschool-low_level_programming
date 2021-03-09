#include <stdlib.h>
#include "dog.h"
/**
* new_dog - creat a new dog.
*
*@name: name of dog
*@age: age of dog
*@owner: dog owner's
*
*Return: pionter to new dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1, len2, i;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
for (len1 = 0; name[len1] != '\0'; len1++)
;
for (len2 = 0; owner[len2] != '\0'; len2++)
;
dog->name = malloc((len1 + 1) * sizeof(char));
if (dog->name == NULL)
{
free(dog->name);
return (NULL);
}
dog->owner = malloc((len2 + 1) * sizeof(char));
if (dog->owner == NULL)
{
free(dog->name);
free(dog->owner);
free((dog);
return (NULL);
}
for (i = 0; i <= len1; i++)
dog->name[i] = name[i];
dog->age = age;
for (i = 0; i <= len2; i++)
dog->owner[i] = owner[i];
return (dog);
}
