#include "main.h"

/**
 *_printf - printf
 *@format: format
 *Return: Number of character
 */

int _printf(const char *format, ...)
{
	int i = 0;/*recorre format*/
	int	c = 0;/*contar el num de caracteres impresos*/
	va_list ptr;/*maneja los argumentos pasados a la funcion*/
	int (*f)(va_list) = NULL;/*para saber que accion realizar segun el*/
/*formato dado, c, s, %. d, i*/
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);/*si format es nulo otiene un solo caracter % se devuelve*/
/*-1 como error*/
	va_start(ptr, format);/*se inicializa ptr para apuntar a la 1ra variable*/

	for (i = 0; format[i]; i++)/*recorre format*/
	{/*si el carac es % se determina que hacer usando la funcion get_op*/
		if (format[i] == '%')/*el resultado se guarda en la funcion f*/
		{
			f = get_op_func(format[++i]);
/*si se encuentra una funcion f valida, se llama a traves de f ptr*/
			if (f)
				c += (*f)(ptr);/*para procesar el argumento y sumar el resul*/
			else/*al contador*/
			{
				c += (_putchar('%') + _putchar(format[i]));
			}
		}
		else/*si no se encuentra una función valida para el formato especifcd*/
			c += _putchar(format[i]);/*se imprime el caracter nulo y el*/
	}
	/*siguiente caracter sin procesar*/
	va_end(ptr);
return (c);
}
