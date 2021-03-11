#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - performs simple operations
* @argc: arg count
* @argv: arg value
*
* Return:int
*/
int main(int argc, char *argv[])
{
int x, y, z;
int (*res)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
x = atoi(argv[1]);
y = atoi(argv[3]);
res = get_op_func(argv[2]);
if (res == NULL)
{
printf("Error\n");
exit(99);
}
z = res(x, y);
printf("%d\n", z);
return (0);
}
