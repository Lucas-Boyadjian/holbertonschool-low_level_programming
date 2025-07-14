# C - Variables, if, else, while

This project focuses on basic C programming concepts including variables, conditional statements, and loops.

## Description

This project introduces fundamental programming concepts in C, such as variable declaration and initialization, conditional statements (if, else), logical operators, and loop constructs (while). It also covers basic arithmetic operators, relational operators, and ASCII character representation.

## Learning Objectives

- Understanding arithmetic operators and how to use them
- Logical operators (boolean operators) and their usage
- Relational operators and how they work in conditional statements
- What values are considered TRUE and FALSE in C
- How to use if, if...else statements
- How to declare variables of different types
- How to use the while loop
- How to print variables using printf and putchar
- ASCII character set understanding
- The gcc flags `-m32` and `-m64`

## Tasks

1. **0-positive_or_negative.c** - Program that determines if a random number is positive, negative, or zero
2. **1-last_digit.c** - Program that prints the last digit of a random number
3. **2-print_alphabet.c** - Program that prints the alphabet in lowercase
4. **3-print_alphabets.c** - Program that prints the alphabet in lowercase, then in uppercase
5. **4-print_alphabt.c** - Program that prints the alphabet in lowercase except 'q' and 'e'
6. **5-print_numbers.c** - Program that prints all single digit numbers of base 10
7. **6-print_numberz.c** - Program that prints all single digit numbers of base 10 using putchar
8. **7-print_tebahpla.c** - Program that prints the lowercase alphabet in reverse
9. **8-print_base16.c** - Program that prints all the numbers of base 16 in lowercase
10. **9-print_comb.c** - Program that prints all possible combinations of single-digit numbers
11. **100-print_comb3.c** - Program that prints all possible different combinations of two digits
12. **101-print_comb4.c** - Program that prints all possible different combinations of three digits

## Requirements

- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code must follow the Betty style
- No global variables allowed
- No more than 5 functions per file
- No standard library functions allowed except those specified (printf, putchar)
- The use of functions like printf and puts is typically restricted to specific tasks
- All code should be in the main function

## Example

```c
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    
    if (n > 0)
        printf("%d is positive\n", n);
    else if (n == 0)
        printf("%d is zero\n", n);
    else
        printf("%d is negative\n", n);
    
    return (0);
}
```

## Note

Understanding variables, control flow with conditionals, and loops are fundamental concepts in programming. Mastering these basics is essential before moving on to more complex topics like functions, pointers, and data structures.

## Author

Lucas - Holberton School Student