# C - Structures, typedef

This project focuses on understanding and implementing structures and typedef in C programming.

## Description

In C programming, structures allow grouping variables of different types under a single name, while typedef provides a way to create aliases for data types. This project explores these concepts through practical implementations related to a dog structure.

## Learning Objectives

- Understanding what structures are and when to use them
- How to define and use structures
- What typedef is and how to use it
- How to create new data types using typedef
- Practical applications of structures in C programming
- Memory allocation for structures

## Tasks

1. **dog.h** - Define a new type struct dog with elements: name, age, and owner
2. **1-init_dog.c** - Function that initializes a variable of type struct dog
3. **2-print_dog.c** - Function that prints a struct dog
4. **dog.h (updated)** - Define a new type dog_t as a new name for the type struct dog
5. **4-new_dog.c** - Function that creates a new dog
6. **5-free_dog.c** - Function that frees dogs (memory cleanup)

## Requirements

- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code must follow the Betty style
- No global variables allowed
- Maximum of 5 functions per file
- The only C standard library functions allowed are printf, malloc, free, and exit
- Prototypes of all functions and the typedef dog_t should be included in a header file called `dog.h`
- Header files should be include guarded

## Structure Example

```c
/**
 * struct dog - Structure representing a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: A structure containing information about a dog
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

typedef struct dog dog_t;
```

## Memory Management

When working with structures that contain pointers (like strings), remember:
- Always allocate memory for the strings when creating a new structure instance
- Copy the string content, not just the pointer
- Free all allocated memory properly when it's no longer needed

## Note

Understanding structures and typedef is crucial for organizing related data in C programming. These concepts allow for creating more complex and meaningful data types that better represent real-world objects and relationships.