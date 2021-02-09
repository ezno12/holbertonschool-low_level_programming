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
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
