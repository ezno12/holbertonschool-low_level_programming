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
for (c = 48; c < 58; ++c)
{
putchar("%i", c);
}
putchar('\n');
}
return (0);
}
