#include "main.h"
/**
 *_putchar - print a character
 *@c: character to print
 *Return: a character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
			
