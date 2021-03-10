#include "3-calc.h"
#include <string.h>
/**
* get_op_func - fucntion select right operat
*
* @s: char pionter
*
* Return: int.
*/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (ops.op != NULL)
if (strcmp(s, ops[i].op) == 0)
return (ops[i].f);
}
i++;
}
return (NULL);
}
