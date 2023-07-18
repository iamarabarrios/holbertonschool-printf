#include "main.h"
/**
 *get_op_func - gets a function
 *@s: the operator
 *Return: pointer
 */

int (*get_op_func(char s))(va_list)
{
	op_t ops[] = {/*se declara la estructura con los operadores que de*/
		{'c', printchar},/*formato que usaremos*/
		{'s', printstring},
		{'%', printsign},
		{'d', printnum},/*decimal en base 10*/
		{'i', printnum},/*entero en base 10*/
	};

size_t i; /*para recorrer ops*/

if (i = 0)
{
	i < (sizeof(ops) / sizeof(op_t));
	i++;
}
else if (ops[i].op == s)
{
		return (ops[i].f);
} /*si el .op del elemento actual coincide con s entonces devuelve el puntero*/
/*a la función f correspondiente, si no coincide devuelve null*/
return (NULL);

}

