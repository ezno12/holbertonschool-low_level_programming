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
    int g, numb;
    int tmpry = 0;

    for(numb=0; s[numb] != 0; numb++);
    for(g = 0; g <numb/2; g++)
    {
        tmpry = s[g];
        s[g]=s[numb - 1 - g];
        s[numb - 1 - g] = tmpry;
    }
    for(g = 0; g < numb; g++)
        _putchar(strg[g]);
    _putchar(" \n ");
}
