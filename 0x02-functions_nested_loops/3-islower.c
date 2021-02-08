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
putchar('1');
else
putchar('0');
putchar('\n');
return (0);
}
