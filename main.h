#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
/**
 *struct op - the struct
 *@op: the operator
 *@f: the function
 */
typedef struct op
{/*puntero a la funcion f, toma un argumento de tipo va_list*/
	char op;
	int (*f)(va_list);
} op_t;

int _printf(const char *format, ...);
int (*get_op_func(char))(va_list);
int _putchar(char c);
int printchar(va_list);
int printstring(va_list *str);
int printnum(va_list);
int printsign(va_list);
int putnum(unsigned long int n, int base, char *digits);
#endif
