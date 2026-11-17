*This project has been created as part of the 42 curriculum by joaocast.*

# Libft

## Description

Libft is the first project of the 42 curriculum. The goal is to build, in C, a static library (`libft.a`) that reimplements a set of standard C library functions and adds a few extra utilities. The library is reused in later 42 projects, so it must be robust, Norm-compliant and free of memory leaks.

The library is split in three parts:

- **Part 1 - Libc functions**, reimplemented with the `ft_` prefix.
- **Part 2 - Additional functions**, which are not in libc or exist in a different form.
- **Bonus - Linked lists**, built around the `t_list` structure.

All functions follow the 42 Norm, and the only external functions used are those allowed by the subject (`malloc`, `free`, `write`).

### Library description

#### Part 1 - Libc functions

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if a character is alphabetic. |
| `ft_isdigit` | Checks if a character is a decimal digit. |
| `ft_isalnum` | Checks if a character is alphanumeric. |
| `ft_isascii` | Checks if a character fits in the 7-bit ASCII range. |
| `ft_isprint` | Checks if a character is printable. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |
| `ft_strlen` | Returns the length of a string. |
| `ft_strlcpy` | Copies a string to a buffer of a given size, always NUL-terminating it. |
| `ft_strlcat` | Appends a string to a buffer of a given size, always NUL-terminating it. |
| `ft_strchr` | Locates the first occurrence of a character in a string. |
| `ft_strrchr` | Locates the last occurrence of a character in a string. |
| `ft_strncmp` | Compares at most `n` characters of two strings. |
| `ft_strnstr` | Locates a substring in a string, searching at most `len` characters. |
| `ft_strdup` | Returns a newly allocated copy of a string. |
| `ft_memset` | Fills a memory area with a constant byte. |
| `ft_bzero` | Sets a memory area to zero. |
| `ft_memcpy` | Copies a memory area (areas must not overlap). |
| `ft_memmove` | Copies a memory area, handling overlapping areas. |
| `ft_memchr` | Locates the first occurrence of a byte in a memory area. |
| `ft_memcmp` | Compares two memory areas. |
| `ft_calloc` | Allocates zero-initialized memory for an array of elements. |
| `ft_atoi` | Converts the initial part of a string to an `int`. |

#### Part 2 - Additional functions

| Function | Description |
|----------|-------------|
| `ft_substr` | Allocates and returns a substring of a string. |
| `ft_strjoin` | Allocates and returns the concatenation of two strings. |
| `ft_strtrim` | Allocates and returns a copy of a string without the given characters at its start and end. |
| `ft_split` | Splits a string by a delimiter into a NULL-terminated array of strings. |
| `ft_itoa` | Allocates and returns the string representation of an integer. |
| `ft_strmapi` | Applies a function to each character of a string and returns the new string. |
| `ft_striteri` | Applies a function to each character of a string, passing its index. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

#### Bonus - Linked lists

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new node with the given content. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstsize` | Counts the nodes of the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstdelone` | Frees a single node's content with a given function, then the node. |
| `ft_lstclear` | Deletes and frees a node and all the following ones, and sets the list pointer to NULL. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content, cleaning up on allocation failure. |

## Instructions

### Compilation

The library is compiled with `cc` and the flags `-Wall -Wextra -Werror`.

```bash
make            # builds libft.a (parts 1 and 2)
make bonus      # builds libft.a with the linked list functions
make clean      # removes object files
make fclean     # removes object files and libft.a
make re         # fclean + all
```

### Usage

Include the header in your code and link against the library:

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -I. -o program
```

Example:

```c
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char    **words;

    words = ft_split("hello 42 world", ' ');
    printf("%s\n", words[1]);   // 42
    return (0);
}
```

## Resources

### References

- `man 3` pages for each reimplemented function (`man 3 strlcpy`, `man 3 memmove`, ...)
- *The C Programming Language* (Kernighan & Ritchie)
- [GNU Make manual](https://www.gnu.org/software/make/manual/)
- 42 Norm
- Valgrind documentation and AddressSanitizer for memory checks

### Use of AI

AI (Claude) was used as a learning and review tool, not to replace my own work. It was used for:

- **Explaining concepts**, mainly pointers to pointers (`t_list **`) and why `ft_lstadd_front` needs one.
- **Reviewing my code** and pointing out bugs, such as wrong types, missing edge cases, off-by-one errors and Norm issues.
- **The Makefile**: helping to write and debug it.
- **Testing**: generating small `main` files to test individual functions.

I wrote and understood the code of the library myself, and tested it before submitting.