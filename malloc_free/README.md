# C - malloc, free

This project focuses on dynamic memory allocation in C programming using the `malloc` and `free` functions.

## Description

In C programming, memory allocation can be done in two ways: static and dynamic. This project explores dynamic memory allocation, which allows programs to request memory at runtime using functions like `malloc`, and to release that memory when it's no longer needed using `free`.

## Learning Objectives

- Understanding the difference between automatic and dynamic allocation
- What is `malloc` and `free` and how to use them
- Why and when to use `malloc`
- How to use `valgrind` to check for memory leaks

## Tasks

1. **0-create_array.c** - Function that creates an array of chars, and initializes it with a specific char
2. **1-strdup.c** - Function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter
3. **2-str_concat.c** - Function that concatenates two strings
4. **3-alloc_grid.c** - Function that returns a pointer to a 2 dimensional array of integers
5. **4-free_grid.c** - Function that frees a 2 dimensional grid previously created by the alloc_grid function

## Requirements

- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code must follow the Betty style
- No global variables allowed
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc` and `free`
- Prototypes of all functions should be included in a header file called `main.h`

## Memory Management

Proper memory management is crucial in C programming:
- Always check if `malloc` returned `NULL` (allocation failed)
- Always free dynamically allocated memory when it's no longer needed
- Avoid memory leaks by ensuring all allocated memory is properly freed

## Examples

```c
// Example of using malloc to create an array
char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;
    
    if (size == 0)
        return (NULL);
    
    array = malloc(size * sizeof(char));
    if (array == NULL)
        return (NULL);
    
    for (i = 0; i < size; i++)
        array[i] = c;
    
    return (array);
}
```

## Note

Understanding dynamic memory allocation is essential for efficient C programming, especially when dealing with data structures of variable size or when the amount of memory needed is not known at compile time.

## Author

Lucas - Holberton School Student