#include "holberton.h"
/**
 * _strlen - swaping 2 integer using a pointer
 *
 * @s: caractere
 *
 * Return: int
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
++i;
return (i);
}
