#include <stdlib.h>
#include <stdio.h>
/**
* main - prints opcode
* @argc: arguement count
* @agrv: arguement
* Return: int 1 or 2 fail
**/
int main(int argc, char *agrv[])
{
int num, i;
char *str;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
num = atoi(agrv[1]);
if (num < 0)
{
printf("Error\n");
exit(2);
}
str = (char *)main;
for (i = 0; i < num - 1; i++)
printf("%02hhx ", str[i]);
printf("%02hhx\n", str[i]);
return (0);
}
