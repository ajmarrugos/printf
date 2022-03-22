#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
/**
 * struct arg_s - structure of ags
 *
 * @f: argument option
 * @op: Function to operate
 */
typedef struct arg_s
{
	char op;
	char* (*f)();
} op_t;

char* (*get_op_func(char *s))(va_list);
char *print_char(va_list lst);
char *print_int(va_list lst);
char *print_string(va_list lst);

#endif /* MAIN_H */