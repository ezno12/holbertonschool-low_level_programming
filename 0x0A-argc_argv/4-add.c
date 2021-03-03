#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - add positve num
* @argc:int
* @argv: array pionter
* Return:int
*/
int main(int argc, char *argv[])
{
int x = 0, y, z;
for (y = 1; y < argc; y++)
{
for (y = 0; argv[y][z]; z++)
{
if (isdigit(argv[y][z]) == 0)
{
printf("Error\n");
return (1);
}
}
}
for (y = 1; y < argc; y++)
{
x += atoi(argv[y]);
}
printf("%d\n", x);
return (0);
}
