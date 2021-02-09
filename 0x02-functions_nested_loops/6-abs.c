#include "holberton.h"

/**
 * _abs - check valeur absul .
 * @n: integer.
 * Return: neg/pos/0.
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n = n * -1);
	}
	else
		return (0);
}
