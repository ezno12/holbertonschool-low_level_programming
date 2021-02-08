#include <stdio.h>
/**
*main - main function
*
*Return: 0 (sucess)
*/
int main(void)
{
int x, z;

for (x = '0'; x <= '9'; ++x)
{
for (z = x; z <=  '9'; ++z)
{
if (x != z)
{
if (x != '0' || z != '1')
{
putchar(',');
putchar(' ');
}
putchar(x);
putchar(z);
}
}
}

putchar('\n');
return (0);
}
