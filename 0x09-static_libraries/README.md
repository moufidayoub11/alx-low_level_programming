# **0x09-static_libraries**

This subdirectory is part of the **ALX Low-Level Programming** repository. It contains a series of C programs and a static library demonstrating functionalities related to static libraries, as part of an **ALX project**.

## **Files**

Here's a brief description of each file in this directory:

1. `0-isupper.c`: Checks if a character is an uppercase letter.
2. `0-memset.c`: Fills memory with a constant byte.
3. `0-strcat.c`: Concatenates two strings.
4. `100-atoi.c`: Converts a string to an integer.
5. `1-isdigit.c`: Checks if a character is a digit.
6. `1-memcpy.c`: Copies memory area.
7. `1-strncat.c`: Concatenates two strings, using at most n bytes from src.
8. `2-strchr.c`: Locates a character in a string.
9. `2-strlen.c`: Returns the length of a string.
10. `2-strncpy.c`: Copies a string, with a byte limit.
11. `3-islower.c`: Checks if a character is a lowercase letter.
12. `3-puts.c`: Prints a string to stdout.
13. `3-strcmp.c`: Compares two strings.
14. `3-strspn.c`: Gets the length of a prefix substring.
15. `4-isalpha.c`: Checks if a character is an alphabetic letter.
16. `4-strpbrk.c`: Searches a string for any of a set of bytes.
17. `5-strstr.c`: Locates a substring.
18. `6-abs.c`: Computes the absolute value of an integer.
19. `9-strcpy.c`: Copies the string pointed to by src to dest.
20. `create_static_lib.sh`: A script that creates a static library named liball.a from all the .c files in the current directory.
21. `liball.a`: The static library containing the compiled object files from the .c files.
22. `main.h`: A header file containing the function prototypes used in these programs.
23. `_putchar.c`: A file with the function `_putchar` that writes a character c to stdout.

## **Getting Started**

To use these programs and the static library:

1. Clone this repository:
    ```
     git clone https://github.com/moufidayoub11/alx-low_level_programming.git
    ```

2. Navigate to the new subdirectory:
    ```
     cd alx-low_level_programming/0x09-static_libraries
    ```

3. To create the static library liball.a, run the script create_static_lib.sh:
    ```
     ./create_static_lib.sh
    ```

4. Create a `main.c` file that includes `main.h` and calls the function you want to use. For example, to use the `_puts()` function, your `main.c` might look like:
    ```c
    #include "main.h"

    int main(void)
    {
        _puts("Hello, world!");
        return (0);
    }
    ```

5. Compile `main.c` with the static library and execute:
    ```
     gcc main.c -L. -lall -o output && ./output
    ```

## **Contributing**

At this time, we are not accepting contributions to this subdirectory. This may change in the future, so please check back later. If you find any bugs or issues, please report them by [opening an issue in the repository](https://github.com/moufidayoub11/alx-low_level_programming/issues).

Feel free to explore the various C programs in this subdirectory and the static library to learn more about using static libraries in C programming! Happy coding!
