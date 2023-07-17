#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
/**
 *
 *
 *
 *
 *
 *
 */
typedef struct op
{
	char op;
	int (*f)(va_list);
} op_t;

int _printf(const char *format, ...);
int _putchar(char c);

#endif
