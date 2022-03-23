#include "main.h"

/**
 * _printf - Custom function
 * @format: Char pointer
 * Return: number of chars that print
 **/

int _printf(const char *format, ...)
{
va_list vaList;
int x, y, i = 0;
char bufer[2022], *str, the_char;
char* (*choose)(va_list);
if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);
va_start(vaList, format);
for (x = 0; format[x]; x++)
{
if (format[x] == '%' && format[x + 1] != '%')
{
x++;
choose = get_op_func((char *)format + x);
if (!choose)
return (-1);
str = choose(vaList);
for (y = 0; str[y]; y++)
{
bufer[i] = str[y];
i++;
}
i = i == 0 ? 1 : i;
}
else
{
bufer[i] = format[x];
the_char = (char)bufer[i];
if (the_char == '%')
format++;
i++;
}
}
va_end(vaList);
write(1, &bufer, i);
return (i);
}
