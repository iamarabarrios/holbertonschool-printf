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

/**
 *putstring - print a string
 *@str: the string copy
 *Return: string
 */

int putstring(char *str)
{
	int i;

	if (!str)
	{
		return (putstring("(null)"));
	}

	for (i = 0; str[i] != '\0' ; i++)
		_putchar(str[i]);

	return (i);

}

/**
 *putNum - Print an integer
 *@n: the number print
 *@base: base
 *@digits: digit
 *Return: number
 */

int putNum(unsigned long int n, int base, char *digits)
{
	int i = 0;

	if (n / base)
		i += putNum(n / base, base, digits);

	i += _putchar(digits[n % base]);

	return (i);
}
