#include <holberton.h>
/**
* _islower -function to checl lower case alphabets
*
* @c: is int parameter contain code ASCii of alphabets
*
* Return:0  (sucess)
*/
int _islower(int c)
{
if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
putchar('1');
else
putchar('0');
putchar('\n');
return (0);
}
