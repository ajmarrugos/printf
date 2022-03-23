#include "main.h"

/**
* _printf - formatted output conversion and print data.
* @format: input string.
* Return: number of chars printed.
**/

int _printf(const char *format, ...)
{
unsigned int i = 0, len = 0, ibuf = 0;
va_list arguments;
int (*function)(va_list, char *, unsigned int);
char *buffer;
va_start(arguments, format);
buffer = malloc(sizeof(char) * 1024);
while (format && format[i])
{
if (format[i] == '%')
{
if (format[i + 1] == '%')
buffer_handler(buffer, format[i], ibuf), len++;
else if (format[i + 1] == '\0')
{
if (ibuf != 0)
print_buf(buffer, ibuf);
free(buffer);
return (-1);
}
else
{
function = get_print_func(format, i + 1);
len += function(arguments, buffer, ibuf);
}
i++;
}
else
buffer_handler(buffer, format[i], ibuf), len++;
i++, ibuf = len;
while (ibuf > 1024)
ibuf -= 1024;
}
print_buf(buffer, ibuf), free(buffer), va_end(arguments);
return (len);
}
