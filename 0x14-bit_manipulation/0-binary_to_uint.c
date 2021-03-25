#include "holberton.h"
/**
* binary_to_uint - convert binary to an unsigned int.
*
* @b:char pionter.
*
* Return: int (success).
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int val = 0;
int i;
if (b == NULL)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
}
i = 0;
while (b[i] == '0' || b[i] == '1')
{
val <<= 1;
val += b[i] - '0';
i++;
}
return (val);
}
