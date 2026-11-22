*This project has been created as part of the 42 curriculum by <shicai>.*

# Description

Libft is a C library developed as part of the 42 curriculum. The goal of this project is to recreate a set of standard C library functions and implement additional utility functions, including those for character classification, string manipulation, memory operations, conversion, file descriptor output, and linked-list manipulation.

# Library Contents

## Part 1 — Libc Functions

Reimplementations of standard C library functions, including:

- Character checks and conversions: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_tolower`, `ft_toupper`
- String functions: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`
- Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- Conversion: `ft_atoi`
- Allocation and duplication: `ft_calloc`, `ft_strdup`

## Part 2 — Additional Functions

Functions not included in the original libc set:

- String manipulation: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
- File descriptor output: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

## Part 3 — Linked Lists

A set of functions to create and manipulate singly linked lists using the `t_list` structure defined in `libft.h`:

- `ft_lstnew`: creates a new list node
- `ft_lstadd_front`: adds a node to the beginning
- `ft_lstadd_back`: adds a node to the end
- `ft_lstsize`: counts the nodes
- `ft_lstlast`: returns the last node
- `ft_lstdelone`: deletes one node
- `ft_lstclear`: deletes an entire list
- `ft_lstiter`: applies a function to each node's content
- `ft_lstmap`: creates a new list by applying a function to each node's content

# Instructions

## Compilation

Run 'make' at the root of the repository to compile the library. This generates `libft.a`, a static library.

Other available Makefile rules:

```bash
make clean   # Remove object files
make fclean  # Remove object files and libft.a
make re      # Rebuild the library
```

## Using the Library

Include `libft.h` in your C source file and link against `libft.a` when compiling:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_isalpha('A'));
    printf("%zu\n", ft_strlen("Hello, world!"));
    return (0);
}
```

Compile your program from the repository root:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o test
./test
```

# Resources

## AI Usage

AI tools were used as learning and debugging assistance during development. They helped explain C concepts such as pointers, memory management, string operations, and linked lists; identify potential bugs; clarify compiler and tester errors; and suggest test cases and debugging approaches.

The implementation, testing, and final verification of the functions remain the developer's responsibility.