#include "holberton.h"
/**
* _isupper - check uppercase caractere
* Description: check upper case
*@c : integer for isupper function
*
*Return: 0, 1 : success
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
