#include "main.h"

/**
* print_char - Print formated
* @lst: va_arg
* Return: String to print
**/

char *print_char(va_list lst)
{
char *the_list;
char charV;
if (!lst)
return (0);
charV = va_arg(lst, int);
the_list = malloc(sizeof(char) * 2);
if (!the_list)
{
free(the_list);
return (NULL);
}
if (charV)
{
the_list[0] = charV;
}
else
{
the_list[0] = '\0';
}
the_list[1] = '\0';
return (the_list);
}
