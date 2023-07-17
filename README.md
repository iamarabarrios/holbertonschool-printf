# C-printf
write our own printf function.

**Description:**
The C library function int printf(const char *format, ...) sends the formatted output to stdout.
_Prototype:_ int _printf(const char *format, ...);

**_Concepts_**
_For this project, we expect you to look at these concepts:_

* Approaching a Project
* Group Projects
* Pair Programming - How To
* Flowcharts

**_Resources:_**

* Secrets of printf

**_Requirements:_**

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called main.h
* Don’t forget to push your header file
* All your header files should be include guarded
* Note that we will not provide the _putchar function for this project

**_Authorized functions and macros:_**

* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)

**_Return:_**

Return the number of characters printed (excluding the null byte used to end output to strings).

# **Tasks:**

_0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life_

* Write a function that produces output according to a format.

 Prototype: int _printf(const char *format, ...);
 --Returns: the number of characters printed (excluding the null byte used to end output to strings)

 --write output to stdout, the standard output stream
 
 --format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
 
c

s

%

 --You don’t have to reproduce the buffer handling of the C library printf function
 
 --You don’t have to handle the flag characters
 
 --You don’t have to handle field width
 
 --You don’t have to handle precision
 
 --You don’t have to handle the length modifiers
 
 **Repo:**

GitHub repository: holbertonschool-printf
 

__1. Education is when you read the fine print. Experience is what you get if you don't_

* Handle the following conversion specifiers:

d

i

-- You don’t have to handle the flag characters

-- You don’t have to handle field width

-- You don’t have to handle precision

-- You don’t have to handle the length modifiers

**Repo:**

GitHub repository: holbertonschool-printf

_2. Just because it's in print doesn't mean it's the gospel_
mandatory

* Create a man page for your function.

**Repo:**

GitHub repository: holbertonschool-printf
File: man_3_printf
