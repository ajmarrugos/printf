#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
* struct print - struct for printer functions
* @type_arg: identifier
* @f: pointer to a printer functions
* Description: struct that stores pointers to a
* printer functions.
**/

typedef struct print
{
char *type_arg;
int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
int print_chr(va_list arguments, char *buf, unsigned int ibuf);
int print_str(va_list arguments, char *buf, unsigned int ibuf);
int print_int(va_list arguments, char *buf, unsigned int ibuf);
unsigned int buffer_handler(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int ev_print_func(const char *s, int index);
int prinpint(va_list arguments, char *buf, unsigned int ibuf);

#endif
