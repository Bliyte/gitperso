*This project has been created as part of the 42 curriculum by **clrenaul**.*

# ft_printf

## Description

**ft_printf** is a project from the 42 Common Core curriculum. Its goal is to recreate the behavior of the standard C library function `printf()`.

The project focuses on variadic functions in C and requires handling different data types, format specifiers and output conversions.

The main objective is to understand how formatted output works internally, while developing a deeper understanding of variadic arguments, pointers, string manipulation and data conversion.

The result is a static library called `libftprintf.a`, which provides a custom implementation of `printf()` that can be reused in other C projects.

## Instructions

### Compilation

Clone this repository and navigate to its root directory.

Run the following command:

```bash
make
```

This compiles the source files and generates the static library `libftprintf.a`.

### Available Makefile Rules

| Rule | Description |
|---|---|
| `make` | Compiles the library. |
| `make clean` | Removes object files (`.o`). |
| `make fclean` | Removes object files and the library. |
| `make re` | Rebuilds the library from scratch. |

### Usage

To use `ft_printf` in another C project, include the header file:

```c
#include "ft_printf.h"
```

Compile your program using:

```bash
cc main.c -L. -lftprintf -I. -o program
```

Then execute it:

```bash
./program
```

## Supported Conversions

The mandatory part of the project requires implementing the following conversions:

| Specifier | Description | Example |
|---|---|---|
| `%c` | Prints a single character. | `ft_printf("%c", 'A');` |
| `%s` | Prints a string. | `ft_printf("%s", "Hello");` |
| `%p` | Prints a pointer address in hexadecimal. | `ft_printf("%p", ptr);` |
| `%d` | Prints a decimal integer. | `ft_printf("%d", 42);` |
| `%i` | Prints an integer in decimal notation. | `ft_printf("%i", -42);` |
| `%u` | Prints an unsigned decimal integer. | `ft_printf("%u", 42);` |
| `%x` | Prints an unsigned integer in lowercase hexadecimal. | `ft_printf("%x", 255);` |
| `%X` | Prints an unsigned integer in uppercase hexadecimal. | `ft_printf("%X", 255);` |
| `%%` | Prints a literal percent sign. | `ft_printf("100%%");` |

## Algorithm and Data Structures

### 1. Variadic Arguments

Unlike regular functions, `printf()` accepts a variable number of arguments.

To reproduce this behavior, the project uses the C standard library's `<stdarg.h>` header.

The following macros are essential:

- `va_list` – Declares a variable that stores the list of additional arguments.
- `va_start` – Initializes the argument list.
- `va_arg` – Retrieves the next argument with the requested data type.
- `va_end` – Cleans up the argument list after processing.

This mechanism allows the function to retrieve arguments dynamically, depending on the format specifiers found in the input string.

### 2. Format String Parsing

The main algorithm consists of iterating through the format string character by character.

When a regular character is encountered, it is printed directly.

When a `%` character is found, the next character is examined to identify the requested conversion.

The corresponding argument is then retrieved using `va_arg` and processed according to its type.

Each conversion is handled separately, allowing the implementation to remain modular and easier to maintain.

### 3. Data Structures and Design Choices

The implementation relies primarily on two elements:

- **`va_list`**: Used to manage the variable arguments passed to the function. It avoids the need to know the number of arguments in advance.
- **Format string pointer**: Used to traverse the input string sequentially and identify conversion specifiers.

The implementation also maintains a character counter to keep track of the number of characters successfully written.

This counter is essential because `printf()` must return the total number of characters printed.

The choice of a sequential parsing approach makes the algorithm straightforward, efficient and easy to extend with additional formatting features.

## Resources

### Documentation and References

The following resources were useful during the development of this project:

- [42 School](https://42.fr/) – Project specifications and curriculum.
- [C Reference - stdarg.h](https://en.cppreference.com/w/c/variadic.html) – Documentation about variadic functions.
- [printf() - Linux Manual Page](https://man7.org/linux/man-pages/man3/printf.3.html) – Reference for the original printf behavior.
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/) – Additional information about formatted output and standard C functions.

### AI Usage

ChatGPT and Claude was used as a learning and debugging assistant throughout the project.

It helped with:
- Understanding variadic functions and the `<stdarg.h>` macros.
- Clarifying the behavior of the different format specifiers.
- Understanding the logic behind format string parsing.
- Identifying potential bugs and discussing edge cases.
- Reviewing implementation logic and explaining C-related concepts.

AI was used as a support tool for learning and problem-solving, rather than as a replacement for implementing and understanding the functions.

## Author

**clrenaul**

42 Student
