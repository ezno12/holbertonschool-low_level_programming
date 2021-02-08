#include <stdio.h>
/**
*main - maine function
*
*Return: 0, sucessed
*/
int main(void)
{
int x, y, z;

for (x = '0'; x <= '9'; ++x)
{
for (y = x; y <=  '9'; ++y)
{
for (z = e; z <=  '9'; ++z)
{
if (x != y && x != z && y != z)
{
if (x != '0' || y != '1' || z != '2')
{
putchar(',');
putchar(' ');
}
putchar(x);
putchar(y);
putchar(z);
}
}
}
}

putchar('\n');
return (0);
}
