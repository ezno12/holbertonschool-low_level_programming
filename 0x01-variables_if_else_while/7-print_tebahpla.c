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
char c;
for (c = 'z'; c >= 'a'; --c)
{
putchar(c);
}
putchar('\n');

return (0);
}

