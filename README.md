# Libft

*This project has been created as part of the 42 curriculum by fleite-j.*

## Description

**Libft** is the first project in the 42 curriculum, where students create their own C library containing reimplementations of standard C library functions, along with additional utility functions. This library serves as a foundation for future 42 projects and helps develop a deep understanding of how fundamental C functions work under the hood.

The goal of this project is to:
- Understand and reimplement essential C standard library functions
- Learn memory management and string manipulation
- Build a personal library that can be reused throughout the 42 curriculum
- Develop good coding practices and proper code organization

The library includes functions for character checking, string manipulation, memory operations, linked list management, and file descriptor operations.

## Instructions

### Compilation

To compile the library, simply run:

```bash
make
```

This will create a `libft.a` static library file.

### Cleaning

To remove object files:

```bash
make clean
```

To remove object files and the library:

```bash
make fclean
```

To recompile everything from scratch:

```bash
make re
```

### Usage

To use the library in your project:

1. Include the header in your C files:
```c
#include "libft.h"
```

2. Compile your project with the library:
```bash
gcc your_file.c -L. -lft -o your_program
```

Or directly link the static library:
```bash
gcc your_file.c libft.a -o your_program
```

## Library Functions

### Character Checks & Conversions

- **`ft_isalpha`** - Checks if a character is alphabetic
- **`ft_isdigit`** - Checks if a character is a digit
- **`ft_isalnum`** - Checks if a character is alphanumeric
- **`ft_isascii`** - Checks if a character is in the ASCII table
- **`ft_isprint`** - Checks if a character is printable
- **`ft_toupper`** - Converts a character to uppercase
- **`ft_tolower`** - Converts a character to lowercase

### String Manipulation

- **`ft_strlen`** - Calculates the length of a string
- **`ft_strlcpy`** - Copies a string with size limitation
- **`ft_strlcat`** - Concatenates strings with size limitation
- **`ft_strchr`** - Locates the first occurrence of a character in a string
- **`ft_strrchr`** - Locates the last occurrence of a character in a string
- **`ft_strncmp`** - Compares two strings up to n characters
- **`ft_strnstr`** - Locates a substring in a string with size limitation
- **`ft_strdup`** - Duplicates a string (allocates memory)

### Memory Operations

- **`ft_memset`** - Fills memory with a constant byte
- **`ft_bzero`** - Sets memory to zero
- **`ft_memcpy`** - Copies memory area
- **`ft_memmove`** - Copies memory area (handles overlapping)
- **`ft_memchr`** - Scans memory for a character
- **`ft_memcmp`** - Compares memory areas
- **`ft_calloc`** - Allocates and zeroes memory

### String Creation & Transformation

- **`ft_substr`** - Creates a substring from a string
- **`ft_strjoin`** - Concatenates two strings into a new string
- **`ft_strtrim`** - Trims characters from the beginning and end of a string
- **`ft_split`** - Splits a string into an array of strings using a delimiter
- **`ft_itoa`** - Converts an integer to a string
- **`ft_strmapi`** - Applies a function to each character of a string
- **`ft_striteri`** - Applies a function to each character of a string (with index)

### File Descriptor Operations

- **`ft_putchar_fd`** - Outputs a character to a file descriptor
- **`ft_putstr_fd`** - Outputs a string to a file descriptor
- **`ft_putendl_fd`** - Outputs a string followed by a newline to a file descriptor
- **`ft_putnbr_fd`** - Outputs a number to a file descriptor

### Conversion Functions

- **`ft_atoi`** - Converts a string to an integer

### Linked List Operations (Bonus)

The library includes a complete set of functions for managing singly linked lists:

- **`ft_lstnew`** - Creates a new list node
- **`ft_lstadd_front`** - Adds a node at the beginning of a list
- **`ft_lstsize`** - Counts the number of nodes in a list
- **`ft_lstlast`** - Returns the last node of a list
- **`ft_lstadd_back`** - Adds a node at the end of a list
- **`ft_lstdelone`** - Deletes a node's content using a given function
- **`ft_lstclear`** - Deletes and frees a list
- **`ft_lstiter`** - Iterates over a list and applies a function to each node
- **`ft_lstmap`** - Applies a function to each node and creates a new list

## Resources

### Documentation & References

- [C Standard Library Reference](https://en.cppreference.com/w/c)
- [GNU C Library Manual](https://www.gnu.org/software/libc/manual/)
- [Linux Man Pages](https://man7.org/linux/man-pages/)
- [42 Docs - Libft Guide](https://harm-smits.github.io/42docs/projects/libft)
- [Understanding Linked Lists in C](https://www.learn-c.org/en/Linked_lists)

### Tutorials & Articles

- [Memory Management in C](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
- [String Manipulation in C](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
- [Static Libraries in C](https://www.geeksforgeeks.org/static-vs-dynamic-libraries/)

### AI Usage

AI tools (such as GitHub Copilot and ChatGPT) were used during the development of this project for the following purposes:

- **Understanding function behavior**: Clarifying the expected behavior and edge cases of standard C library functions
- **Debugging assistance**: Identifying logical errors and memory issues in implementations
- **Code optimization suggestions**: Reviewing alternative approaches for better performance
- **Documentation writing**: Assisting with the creation of this README file and code comments
- **Makefile syntax**: Understanding makefile rules and best practices

**Note**: All core function implementations were written and understood independently. AI was used as a learning aid and reference tool, not as a code generator. Every line of code was reviewed, tested, and understood before being included in the final project.

## Project Status

✅ All mandatory functions implemented and tested  
✅ All bonus functions (linked lists) implemented and tested  
✅ Compiled with `-Wall -Wextra -Werror` flags  
✅ No memory leaks (verified with valgrind)  
✅ Norminette compliant
