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
for (c = 38; c < 48; ++c)
{
putchar("%i", c);
}
putchar('\n');
}
return (0);
}
