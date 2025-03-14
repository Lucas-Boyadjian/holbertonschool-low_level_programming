# C - Hello, World

This project serves as an introduction to the C programming language, covering the basics of compilation and the first steps in C programming.

## Description

This project introduces the fundamentals of C programming, including the compilation process, basic syntax, and standard input/output operations. It covers the necessary steps to compile and execute C programs using gcc, as well as writing basic programs in C.

## Learning Objectives

- Understanding the compilation process in C
- Learning about the main function and its role in C programs
- How to print text using printf, puts, and putchar functions
- How to get the size of a specific type using the sizeof operator
- Understanding the gcc compiler and its basic flags
- Following the official C coding style using Betty

## Tasks

1. **0-preprocessor** - Script that runs a C file through the preprocessor and saves the result into another file
2. **1-compiler** - Script that compiles a C file but does not link
3. **2-assembler** - Script that generates the assembly code of a C program
4. **3-name** - Script that compiles a C file and creates an executable named cisfun
5. **4-puts.c** - C program that prints a specific message using the puts function
6. **5-printf.c** - C program that prints a message using the printf function
7. **6-size.c** - C program that prints the size of various data types

## Requirements

- All scripts and programs will be tested on Ubuntu 20.04 LTS
- All scripts should be exactly two lines long
- All C files should follow the Betty style
- C programs should be compiled using gcc with the options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- No errors or warnings during compilation

## Compilation Examples

```bash
# For preprocessor script
$ ./0-preprocessor

# For compiler script without linking
$ ./1-compiler

# For assembly generation script
$ ./2-assembler

# For executable creation script
$ ./3-name

# For C programs
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
"Programming is like building a multilingual puzzle

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c && ./a.out
with proper grammar, but the outcome is a piece of art,

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 6-size.c && ./a.out
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
```

## Note

This project represents the first step in learning C programming. Understanding these basic concepts will form the foundation for more complex topics in future projects.