#include <holberton.h>
/**
* _islower -function to checl lower case alphabets
*
* @c: is int parameter couting
*
* Return:0 or 1 (sucess)
*/
int _islower(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
_putchar('1');
else
_putchar('0');
_putchar('\n');
return (0);
}
