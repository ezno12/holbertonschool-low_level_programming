#include <stdio.h>
/**
* main - print num of argements
* @argc:int
* @argv: array pionter
* Return:int
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}


