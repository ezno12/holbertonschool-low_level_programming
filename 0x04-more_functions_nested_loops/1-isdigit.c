#include "holberton.h"
/**
* _isdigit - check uppercase caractere
* Description: check upper case
*@c : integer for isupper function
*
*Return: 0, 1 : success
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
