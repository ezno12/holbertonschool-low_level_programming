#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print alphabet
*
* Return:0  (sucess)
*/
int main(void)
{
int c;
int d;
for (c = '0'; c <= '9'; ++c)
{
for (d = '0'; d <= '9'; ++d)
{
if (d != '0' || c != '0')
{
putchar(',');
putchar(' ');
}
putchar(c);
putchar(d);
}
}
putchar('\n');
return (0);
}
