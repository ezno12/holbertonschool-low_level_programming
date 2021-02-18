#include "holberton.h"
/**
* rev_string - reverse a string
*
*@s : pionter to char
*
* Return : viod (success)
*/
void rev_string(char *s)
{
char c;
int i, j;
i = 0;
while (s[i + 1] != '\0')
{
i++;
}
j = i;
i = 0;
while (i < j / 2 + 1)
{
c = s[i];
s[i] = s[j - i];
s[j - i] = c;
i++;
}
}

