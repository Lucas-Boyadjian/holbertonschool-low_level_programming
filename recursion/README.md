# C - Recursion

This project focuses on understanding and implementing recursive functions in C programming.

## Description

Recursion is a programming technique where a function calls itself in order to solve a problem. This project explores the concept of recursion and its applications in C programming through various exercises that demonstrate recursive problem-solving approaches.

## Learning Objectives

- Understanding what recursion is and how it works
- How to implement recursive functions
- When to use recursion and when not to use it
- Recognizing problems that can be solved recursively
- Understanding the memory implications of recursive functions
- How recursion affects the call stack

## Tasks

1. **0-puts_recursion.c** - Function that prints a string using recursion
2. **1-print_rev_recursion.c** - Function that prints a string in reverse using recursion
3. **2-strlen_recursion.c** - Function that returns the length of a string using recursion
4. **3-factorial.c** - Function that returns the factorial of a given number
5. **4-pow_recursion.c** - Function that returns the value of x raised to the power of y
6. **5-sqrt_recursion.c** - Function that returns the natural square root of a number
7. **6-is_prime_number.c** - Function that determines if a number is prime
8. **100-is_palindrome.c** - Function that checks if a string is a palindrome
9. **101-wildcmp.c** - Function that compares two strings with wildcard support

## Requirements

- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code must follow the Betty style
- No global variables allowed
- Maximum of 5 functions per file
- No standard library functions allowed except _putchar
- Prototypes of all functions should be included in a header file called `main.h`
- Not allowed to use any kind of loops
- Not allowed to use static variables

## Recursive vs Iterative Approaches

While many problems can be solved using either recursive or iterative approaches, recursion often provides a more elegant solution for certain types of problems, especially those that can be broken down into smaller, similar subproblems.

Key differences:
- Recursive solutions may be more intuitive for certain problems
- Iterative solutions often have better performance due to less overhead
- Recursive solutions can lead to stack overflow if not properly designed

## Example

```c
/**
 * factorial - Returns the factorial of a given number
 * @n: The number to calculate factorial of
 * Return: Factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
    if (n < 0)
        return (-1);
    if (n == 0)
        return (1);
    return (n * factorial(n - 1));
}
```

## Note

Understanding recursion is a fundamental skill in computer science and programming. While recursive solutions may not always be the most efficient, they often provide elegant solutions to complex problems and are essential for algorithms like tree traversal, backtracking, and divide-and-conquer approaches.