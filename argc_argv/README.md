# C - argc, argv

This project focuses on understanding and using command line arguments in C programs through the parameters `argc` and `argv`.

## Description

In C programming, when executing a program from the command line, you can pass arguments to it. These arguments are captured through two parameters in the `main` function:
- `argc` (argument count): The number of arguments passed to the program
- `argv` (argument vector): An array of strings containing the arguments

## Learning Objectives

- How to use arguments passed to a program
- Understanding the two prototypes of `main` function and when to use each
- How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

## Tasks

1. **0-whatsmyname.c** - Program that prints its own name
2. **1-args.c** - Program that prints the number of arguments passed to it
3. **2-args.c** - Program that prints all arguments it receives
4. **3-mul.c** - Program that multiplies two numbers passed as arguments
5. **4-add.c** - Program that adds positive numbers passed as arguments

## Requirements

- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code must follow the Betty style
- No global variables allowed
- Maximum of 5 functions per file
- Prototypes of all functions should be included in a header file called `main.h`

## Usage Examples

```bash
$ ./mynameis
./mynameis

$ ./nargs 
0

$ ./nargs hello world
2

$ ./args hello world
./args
hello
world

$ ./mul 2 3
6

$ ./add 1 2 3 4 5
15
```

## Key Concepts

- The first argument (`argv[0]`) is always the program name
- Arguments are passed as strings and must be converted if numeric operations are needed
- The `atoi()` function can be used to convert string arguments to integers
- Error handling is important when dealing with command line arguments