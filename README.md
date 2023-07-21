# C-_printf

__Description:__

This project consisted of writing our printf function. The function returns the number of characters printed (excluding the null byte used to end output to strings). The C library function int printf(const char *format, ...) sends the formatted output to stdout. Prototype: int _printf(const char *format, ...)
On the production, global variables were not allowed to use, nor were more than 5 functions per file.
- Editors used: vi, vim, emacs
- File compilation: Ubuntu 20.04 LTS using gcc -Wall -Werror -Wextra -pedantic -std=gnu89
- Code style: Betty 

__Functions and macros used:__

- write (man 2 write)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

__Syntax__

Basic syntax is: "_printf ("text1 %Formatcode1 text %Formatcode", variable1, variablen);"

__Printf functions:__

Prototype: int _printf(const char *format, ...); 
--Returns: the number of characters printed (excluding the null byte used to end output to strings)
--Writes output to stdout, the standard output stream
--Format is a character string. The format string is composed of zero or more directives. See man 3 _printf for more detail. 

__Function handles the following conversion specifiers:__

- c - Print a single character.
- s - Print a string.
- % - Print the character '%'.
- d - Print an int decimal.
- i - Print an int decimal.
