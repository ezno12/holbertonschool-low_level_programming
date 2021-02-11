#include "holberton.h"
/**
* _isupper : check uppercase caractere
* Description: check upper case
*@c : integer for isupper function
*
*Return: 0, 1 : success
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
