#ifndef DOG_HDR
#define DOG_HDR
/**
*struct dog - define a new type dog
*@name : name of dog string pionter
*@age : age of dog float
*@owner : owner of dog string pionter
*Description: a new type that contains dog details.
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
