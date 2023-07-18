#include "main.h"
#include <stdarg.h>

/**
* printUNS - prints unsigned
* @args: arguments
* Return: the number printed
*/

int printUNS(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
unsigned int div = 1;
int len = 0;

	while (num / div > 9)
	div *= 10;

	while (div != 0)

	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

return (len);
}

/**
* reverseSTR - reverses a string
* @str: the string to revet
* @len: the length of the string
*/

void reverseSTR(char *str, int len)
{
int i, j;
char temp;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}
