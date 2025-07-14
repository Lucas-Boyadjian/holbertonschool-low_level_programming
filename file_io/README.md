# C - File I/O

This repository contains my projects for learning and implementing file input/output operations in C.

## Repository Structure

- `0-read_textfile.c`  
  Reads a text file and prints it to the POSIX standard output.

- `1-create_file.c`  
  Creates a file and writes text content to it.

- `2-append_text_to_file.c`  
  Appends text content to the end of a file.

- `3-cp.c`  
  Copies the content of a file to another file.

- `main.h`  
  Header file containing function prototypes.

- `incitatous`, `Requiescat`  
  Example text files for testing.

## Key Concepts

- File descriptors and system calls (`open`, `read`, `write`, `close`)
- File permissions and modes
- Error handling for file operations
- Working with buffers and dynamic memory

## Usage

To compile and run any file:

```bash
gcc -Wall -Werror -Wextra -pedantic file.c -o file
./file [arguments...]
```

Replace `file.c` and `[arguments...]` with the actual file and arguments you want to test.

## Requirements

- All programs are written in C and tested on Ubuntu.
- Code follows Holberton School guidelines and Betty style.

## Author

Lucas - Holberton School Student