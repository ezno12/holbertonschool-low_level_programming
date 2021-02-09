#include "holberton.h"

/**
 * print_last_digit - print last digit of given num.
 * @x:integer.
 * Return: value.
 */
int print_last_digit(int x)
{
	int y, z;

	y = x % 10;
	if (y < 0)
	{
		y = -y;
	}
	z = '0' + y;
	_putchar(z);
	return (y);
}
