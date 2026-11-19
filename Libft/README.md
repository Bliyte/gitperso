*This project has been created as part of the 42 curriculum by clrenaul.*

# Libft

## Description

**Libft** is the first major project of the 42 Common Core curriculum. Its purpose is to recreate a collection of standard C library functions, along with additional utility functions, in order to build a personal C library.

The main objective of this project is to understand how fundamental C functions work internally, while developing a deeper understanding of memory management, pointers, strings, linked lists and data manipulation.

The resulting library, `libft.a`, can be reused in future 42 projects instead of relying exclusively on the standard C library.

## Instructions

### Compilation

To compile the library, clone this repository and navigate to its root directory.

Run the following command:

```bash
make
```

This will compile the source files and generate the static library `libft.a`.

### Available Makefile Rules

| Rule | Description |
|---|---|
| `make` | Compiles the mandatory part of the library. |
| `make clean` | Removes object files (`.o`). |
| `make fclean` | Removes object files and the library. |
| `make re` | Rebuilds the library from scratch. |

### Usage

To use Libft in another C project, include the header file and link the compiled library.

```c
#include "libft.h"
```

Compile your program using:

```bash
cc main.c -L. -lft -I. -o program
```

## Library Contents

The library is divided into several categories of functions.

### 1. Libc Functions

Reimplementations of standard C library functions.

**Character checks and conversions**
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

**String manipulation**
- `ft_strlen`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strnstr`
- `ft_strdup`

**Memory manipulation**
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`

**Conversion**
- `ft_atoi`

### 2. Additional Functions

Utility functions developed to extend the functionality of the standard library.

- `ft_substr` – Extracts a substring from a string.
- `ft_strjoin` – Concatenates two strings into a newly allocated string.
- `ft_strtrim` – Removes specified characters from the beginning and end of a string.
- `ft_split` – Splits a string into an array of strings using a delimiter.
- `ft_itoa` – Converts an integer into a string.
- `ft_strmapi` – Applies a function to each character of a string and creates a new string.
- `ft_striteri` – Applies a function to each character of a string using its index.
- `ft_putchar_fd` – Writes a character to a file descriptor.
- `ft_putstr_fd` – Writes a string to a file descriptor.
- `ft_putendl_fd` – Writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd` – Writes an integer to a file descriptor.

### 3. Functions – Linked Lists

This part introduces linked lists and provides functions to create, manipulate and manage them.

Each node is represented by the `t_list` structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

**Available operations:**

- `ft_lstnew` – Creates a new list node.
- `ft_lstadd_front` – Adds a node at the beginning of a list.
- `ft_lstsize` – Counts the number of nodes in a list.
- `ft_lstlast` – Returns the last node of a list.
- `ft_lstadd_back` – Adds a node at the end of a list.
- `ft_lstdelone` – Deletes a single node and frees its content.
- `ft_lstclear` – Deletes and frees an entire list.
- `ft_lstiter` – Applies a function to the content of every node.
- `ft_lstmap` – Creates a new list by applying a function to each node's content.

These functions provide practical experience with dynamic memory allocation, pointers, structures and linked data structures.

## Resources

### Documentation and References

The following resources were useful during the development of this project:

- [42 School](https://42.fr/) – Project specifications and curriculum.
- [C Library Reference](https://en.cppreference.com/w/c/header.html) – Documentation of standard C library functions.
- [Linux Manual Pages](https://man7.org/linux/man-pages/) – Function behavior and system documentation.
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/) – Additional information about standard C functions.

### AI Usage

ChatGPT and Claude was used as a learning and debugging assistant throughout the project.

It helped with:
- Understanding function requirements and expected behavior.
- Clarifying concepts related to pointers, memory allocation and linked lists.
- Identifying potential bugs and explaining compiler errors.
- Reviewing implementation logic and discussing edge cases.

The AI was used as a support tool for understanding and problem-solving, rather than as a replacement for learning and implementing the functions.

## Author

**clrenaul**

42 Student
