# holbertonschool-low_level_programming

This repository contains all the low-level programming projects completed as part of the Holberton School curriculum. Each directory focuses on a specific concept in C programming, from the basics to more advanced topics.

## Table of Contents

- [hello_world](hello_world/) - Introduction to C, compilation, and basic output.
- [variables_if_else_while](variables_if_else_while/) - Variables, conditionals, and loops in C.
- [functions_nested_loops](functions_nested_loops/) - Functions, nested loops, and custom header files.
- [more_functions_nested_loops](more_functions_nested_loops/) - More practice with functions and nested loops.
- [pointers_arrays_strings](pointers_arrays_strings/) - Pointers, arrays, and string manipulation.
- [malloc_free](malloc_free/) - Dynamic memory allocation with malloc and free.
- [more_malloc_free](more_malloc_free/) - Advanced dynamic memory allocation.
- [recursion](recursion/) - Recursive functions and concepts.
- [argc_argv](argc_argv/) - Command-line arguments in C.
- [file_io](file_io/) - File input/output operations.
- [singly_linked_lists](singly_linked_lists/) - Implementation and manipulation of singly linked lists.
- [doubly_linked_lists](doubly_linked_lists/) - Implementation and manipulation of doubly linked lists.
- [structures_typedef](structures_typedef/) - Structures and typedef usage in C.
- [function_pointers](function_pointers/) - Using and implementing function pointers.
- [variadic_functions](variadic_functions/) - Variadic functions and macros.

## About

This repository is a journey through the foundations of C programming, covering:
- Compilation process and GCC usage
- Variables, data types, and operators
- Control flow: if, else, while, for, switch
- Functions: declaration, definition, scope, and recursion
- Pointers, arrays, and strings
- Memory management: malloc, free, calloc, realloc
- File I/O with system calls
- Data structures: singly and doubly linked lists, structs, typedef
- Function pointers and variadic functions
- Code style: Betty linter and best practices

Each directory contains:
- Source code files for each task (named according to Holberton conventions)
- A README.md describing the topic and listing the tasks
- Header files with function prototypes

## Compilation

All C files are compiled on Ubuntu 20.04 LTS with:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file.c -o output
```

## Example

```c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Hello, Holberton!\n");
    return (0);
}
```

## Requirements

- All code is written in C and tested on Ubuntu 20.04 LTS.
- Code follows Holberton School guidelines and Betty style.
- No global variables allowed.
- Maximum of 5 functions per file (unless specified).
- Only allowed standard library functions per project instructions.

## Author

Lucas - Holberton School Student