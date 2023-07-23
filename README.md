# C-_printf

## Description:

This project was done as an assignment under the Low Level Programming unit of Holberton School. It consisted of writing our "printf" function.
The function writes under the control of a `format` string that specifies how subsequent arguments (accessed via the variable-length argument facilities of standard library `stdarg`) are converted for output.
If done correctly, the "printf" function returns the number of characters printed (excluding the null byte used to end output to strings). If an output error is encountered, the function returns `-1`.
The C library function int printf(const char *format, ...) sends the formatted output to stdout. Prototype: int _printf(const char *format, ...)

On the production, global variables were not allowed to use, nor were more than 5 functions per file.
- Editors used: vi, vim, emacs
- File compilation: Ubuntu 20.04 LTS using gcc -Wall -Werror -Wextra -pedantic -std=gnu89
- Code style: Betty 

## Given Tasks

0. A function that produces output according to a format.
	- Prototype: int `_printf(const char *format, ...);`
	- Returns: the number of characters printed (excluding the null byte used to end output to strings)
	- write output to stdout, the standard output stream
	- `format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail. You need to handle the following conversion specifiers:
		- `c`
		- `s`
		- `%`
	- You don’t have to reproduce the buffer handling of the C library `printf` function.
	- You don’t have to handle the flag characters.
	- You don’t have to handle field width.
	- You don’t have to handle precision.
	- You don’t have to handle the length modifiers.

1. Handle the following conversion specifiers:
	- `d`
	- `i`
	- You don’t have to handle the flag characters.
	- You don’t have to handle field width.
	- You don’t have to handle precision.
	- You don’t have to handle the length modifiers.

2. Create a man page for your function.
	- How to read the man page: `man ./man_3_printf`

## Functions and macros used:

- write (man 2 write)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

## Syntax

The _printf function can be used to print various types of data including strings, characters, integers, and decimal numbers.
The basic syntax is:
"_printf ("text1 %Formatcode1 text %Formatcode", variable1, variablen);"

## Format of the Argument String

- The `format` string argument is a constant character string composed of zero or more directives: ordinary characters (apart from `%`) which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments.
- Conversion specification is introduced by the character `%` and ends with a conversion specifier (which in whole make up the format specifier.)

## Printf functions:

Prototype: int _printf(const char *format, ...); 
--Returns: the number of characters printed (excluding the null byte used to end output to strings)
--Writes output to stdout, the standard output stream
--Format is a character string. The format string is composed of zero or more directives. See man 3 _printf for more detail. 

## Function handles the following conversion specifiers:

- c - Print a single character.
- s - Print a string.
- % - Print the character '%'.
- d - Print an int decimal.
- i - Print an int decimal.

  ## Resources used:

- [secrets of printf](https://www.cypress.com/file/54761/download)
- [Implementing printf and scanf in C](https://iq.opengenus.org/how-printf-and-scanf-function-works-in-c-internally/)
- [All About Printf](https://akshatshibu.wordpress.com/2015/07/22/all-about-printf/)

### Authors

https://github.com/iamarabarrios
https://github.com/gera190293
