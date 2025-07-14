# C - More malloc, free

This project builds upon the previous malloc and free project, covering more advanced dynamic memory allocation techniques in C.

## Description

This project explores additional concepts and practices related to dynamic memory allocation in C programming. It focuses on more complex memory allocation scenarios, memory reallocation, and proper memory management techniques to avoid memory leaks and segmentation faults.

## Learning Objectives

- How to use the `exit` function
- Understanding the functions `calloc` and `realloc` from the standard library and how to use them
- How to allocate memory for arrays and strings dynamically
- Proper techniques for reallocating memory
- How to handle memory allocation failures

## Tasks

1. **0-malloc_checked.c** - Function that allocates memory using malloc and handles allocation failures
2. **1-string_nconcat.c** - Function that concatenates two strings up to n bytes of the second string
3. **2-calloc.c** - Function that allocates memory for an array using malloc and initializes it to zero
4. **3-array_range.c** - Function that creates an array of integers from min to max values
5. **100-realloc.c** - Function that reallocates a memory block using malloc and free

## Requirements

- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code must follow the Betty style
- No global variables allowed
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, and `exit`
- Prototypes of all functions should be included in a header file called `main.h`

## Memory Management Best Practices

- Always check if memory allocation was successful (if the return value is NULL)
- Always initialize allocated memory to prevent unexpected behavior
- Always free dynamically allocated memory when it's no longer needed
- Use valgrind to check for memory leaks in your programs
- When using realloc, understand how it works to avoid data loss

## Example

```c
void *malloc_checked(unsigned int b)
{
    void *ptr;

    ptr = malloc(b);
    if (ptr == NULL)
        exit(98);
    
    return (ptr);
}
```

## Note

Proper memory management is crucial in C programming. Understanding how to effectively allocate and manage memory dynamically is essential for building robust and efficient programs, especially when handling data of variable sizes or when memory requirements are not known at compile time.

## Author

Lucas - Holberton School Student