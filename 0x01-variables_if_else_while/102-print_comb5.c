
#include <stdio.h>
/**
*main - main function
*
*Return: 0, successed
*/
int main(void)
{
unsigned int x, z;

for (x = 0; x <= 99; ++x)
{
for (z = x; z <= 99; ++z)
{
if (x != z)
{
if (x != 0 || z != 1)
{
putchar(',');
putchar(' ');
}
putchar(x / 10 + '0');
putchar(x % 10 + '0');
putchar(' ');
putchar(z / 10 + '0');
putchar(z % 10 + '0');
}
}
}

putchar('\n');
return (0);
}
