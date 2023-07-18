#include "main.h"
/**
*printchar - print a char
*@args: the character
*Return: character
*/

int printchar(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 *printstring - print a string
 *@args: the string copied
 *Return: allways
 */

int printstring(va_list *args)
{
	return (printstring(va_arg(args, char *)));
}

/**
*printnum - print a number
*@args: the number print
*Return: return
*/

int printnum(va_list args)
{
	int n = va_arg(args, int);
	int len = 0;
	int digits[10];
	int i = 0;
	int j = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		len++;

	}
	if (n == 0)
	{
		_putchar('0');
		len++;
	}
	while (n != 0)
	{
		digits[i] = n % 10;
		n /= 10;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(digits[j] + '0');
		len++;
	}
	return (len);
}

/**
 *printsign - print a sign
 *@args: the character
 *Return: allways
 */

int printsign(__attribute__((unused))va_list args)
{
	return (_putchar('%'));
}
