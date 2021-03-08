#include <stdio.h>
#include "dog.h"
/**
* init_dog - initialize a variable of type struct dog
*
*@d: dog type.
*@name: dog name, char pionter.
*@age: age of dog, flaot.
*@owner: name of the owner, char pionter.
*
* Return: viod (success).
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
