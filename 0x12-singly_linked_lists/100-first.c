
#include <stdio.h>

/**
* be4main - function that prints a string before main is executed,
* __attribute__) specify special atribute.
* constructor to call function automaticly.
**/
void __attribute__((constructor)) be4main()
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
