# C - Variadic Functions

This project focuses on understanding and implementing variadic functions in C programming.

## Description

Variadic functions are functions that accept a variable number of arguments. This project explores how to declare, define, and use variadic functions in C using macros from `stdarg.h`.

## Learning Objectives

- What are variadic functions and when to use them
- How to declare and define variadic functions
- How to use `va_start`, `va_arg`, and `va_end` macros
- Practical applications of variadic functions (like printf)
- How to handle different data types in variadic functions

## Tasks

1. **0-sum_them_all.c** - Function that returns the sum of all its parameters
2. **1-print_numbers.c** - Function that prints numbers, followed by a new line
3. **2-print_strings.c** - Function that prints strings, followed by a new line
4. **3-print_all.c** - Function that prints anything

## Requirements

- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code must follow the Betty style
- No global variables allowed
- Maximum of 5 functions per file
- Only standard library functions allowed are those specified in the requirements
- Prototypes of all functions should be included in a header file called `variadic_functions.h`

## Example

```c
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    unsigned int i, sum = 0;

    va_start(args, n);
    for (i = 0; i < n; i++)
        sum += va_arg(args, int);
    va_end(args);

    return (sum);
}
```

## Note

Variadic functions are powerful tools for creating flexible APIs and handling functions like printf that accept a variable number of arguments.

## Author

Lucas - Holberton School Student