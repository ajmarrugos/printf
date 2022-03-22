#include "main.h"

/**
* print_int - Print formated
* @lst: A list of variadic arguments
* Return: String to print
**/

char *print_int(va_list lst)
{
	char *int_to_save;
	int n;
	int i = 0, x = 0;
	char buffer[10];
	unsigned int buff;

	if (!lst)
		return (NULL);
	n = va_arg(lst, int);
	if (n == 0)
	{
		x = 1;
		int_to_save = malloc(sizeof(char) * 2);
		int_to_save[0] = '0';
	}
	else
	{
		if (n < 0)
			buff = -n;
		else
			buff = n;

		while (buff)
		{
			buffer[i++] = (buff % 10) + '0';
			buff = buff / 10;
		}
		if (n < 0)
			buffer[i++] = '-';
		int_to_save = malloc(sizeof(char) * i);

		i--;
		while (i >= 0)
		int_to_save[x++] = buffer[i--];
	}
	int_to_save[x] = '\0';
	return (int_to_save);
}