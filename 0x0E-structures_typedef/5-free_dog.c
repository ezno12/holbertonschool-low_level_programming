#include <stdlib.h>
#include "dog.h"
/**
*free_dog - fress dogs.
*
*@d: pionter.
*
*Return: viod (success).
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->agee);
free(d->owner);
}
}
