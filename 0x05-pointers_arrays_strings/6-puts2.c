#include "holberton.h"
/**
* puts2 - function print pair int
*
*@str: - pionter
*
* Return Viod (sucess)
*/
void puts2(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		if (i % 2 == 0)
		{
		_putchar(*str);
		}
	str++;
	i++;
	}
_putchar('\n');
}
