#include "holberton.h"
/**
*_islower - 0
*@c: an  integer for loop
*Return: zero or one for success
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
