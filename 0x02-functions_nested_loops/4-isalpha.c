#include <holberton.h>
/**
* _isalpha -function to checl lower case alphabets
*
* @c: is int parameter couting
*
* Return:0 or 1 (sucess)
*/
int _isalpha(int c)
{
if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
_putchar('1');
else
_putchar('0');
_putchar('\n');
return (0);
}
