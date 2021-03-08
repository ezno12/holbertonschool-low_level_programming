#include <stdio.h>
#include "dog.h"
/**
*print_dog - print dog details.
*
*@d: dog type.
*
*Return: viod (success).
*
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
{
printf("(nil)\n");
}
else
{
printf("name: %s\n", d->name);
printf("age: %f\n", d->age);
}
if (d->owner == NULL)
{
printf("(nil)\n");
}
else
{
printf("owner: %s\n", d->owner);
}
}
