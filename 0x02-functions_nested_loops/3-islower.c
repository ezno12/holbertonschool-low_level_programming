#include <holberton.h>
/**
* _islower -function to get lowercase alphabet
*
* @c: charachterc is an input integer to check cases
*
* Return:0  (sucess)
*/
int _islower(int c)
{
if ((c >= 97) && (c <= 122))
_putchar('1');
else
_putchar('0');
_putchar('\n');
return (0);
}
