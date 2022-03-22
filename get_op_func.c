#include "main.h"

/**
* get_op_func - Select case according to letter
* @s: selector pointer
* Return: NULL or case
**/

char *(*get_op_func(char *s))(va_list)
{
op_t ops[] = {
{'c', print_char},
{'s', print_str},
{'d', print_int},
{'i', print_int},
{'\0', NULL}
};
unsigned int i = 0;
while (ops[i].op)
{
if (ops[i].op == *s)
return (ops[i].f);
i++;
}
return (NULL);
}
