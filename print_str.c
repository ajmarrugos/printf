#include "main.h"

/**
* replace_string - Replace string in case of NULL arg
* @F_string: Destiny
* @In_string: Source 
* Return: string
**/

char *replace_string(char *F_string, char *In_string)
{
	int i = 0;

	while (In_string[i])
	{
		F_string[i] = In_string[i];
		i++;
	}
	F_string[i] = '\0';
	return (F_string);
}

/**
* print_str - Prints the string
* @lst: va_list pointer
* Return: return pointer
**/

char *print_str(va_list lst)
{
	char *string;
	char *finishV;
	int x;

	if (!lst)
		return (0);
	string = va_arg(lst, char *);
	if (string == NULL)
	{
		finishV = malloc(sizeof(char) * 7);
		finishV = replace_string(finishV, "(null)");
		return (finishV);
	}
	if (string[0] == '\0')
		string = "";
	for (x = 0; string[x]; x++)
	;
	finishV = malloc(x + 1);
	if (!finishV)
		{
		free(finishV);
		return (NULL);
		}
	finishV = replace_string(finishV, string);

	return (finishV);
}