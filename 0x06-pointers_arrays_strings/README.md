# **0x06-pointers_arrays_strings**

This subdirectory is part of the **ALX Low-Level Programming** repository. It contains a series of C programs demonstrating functionalities related to pointers, arrays, and strings, as part of an **ALX project**.

## **Files**

Here's a brief description of each file in this directory:

1. `0-strcat.c`: Concatenates two strings.
2. `100-rot13.c`: Encodes a string using the ROT13 cipher.
3. `101-print_number.c`: Prints an integer.
4. `102-magic.c`: Program that changes the value of a[2] to 98 without using a.
5. `103-infinite_add.c`: Adds two numbers stored in strings.
6. `104-print_buffer.c`: Prints a buffer with specific formatting.
7. `1-strncat.c`: Concatenates two strings, using at most n bytes from src.
8. `2-strncpy.c`: Copies a string, with a byte limit.
9. `3-strcmp.c`: Compares two strings.
10. `4-rev_array.c`: Reverses the content of an array of integers.
11. `5-string_toupper.c`: Converts all lowercase letters of a string to uppercase.
12. `6-cap_string.c`: Capitalizes all words of a string.
13. `7-leet.c`: Encodes a string into 1337 (leet) speak.
14. `main.c`: A main C file to test the functions from the other files.


The directory also includes:
- `main.h`: A header file containing the function prototypes used in these programs.
- `_putchar.c`: A file with the function `_putchar` that writes a character c to stdout.

## **Getting Started**

To use these programs:

1. Clone this repository:
    ```
     git clone https://github.com/moufidayoub11/alx-low_level_programming.git
    ```

2. Navigate to the new subdirectory:
    ```
     cd alx-low_level_programming/0x06-pointers_arrays_strings
    ```

3. Create a `main.c` file that includes `main.h` and calls the function you want to run. For example, to call `_strcat()`, your `main.c` might look like:
    ```c
    #include "main.h"

    int main(void)
    {
        char str[100] = "Hello, ";
        char *src = "world!";
        _strcat(str, src);
        printf("%s\n", str);
        return (0);
    }
    ```

4. Compile `main.c` with the .c file of the program you want to run and execute:
    ```
     gcc main.c program-name.c -o output && ./output
    ```

## **Contributing**

At this time, we are not accepting contributions to this subdirectory. This may change in the future, so please check back later. If you find any bugs or issues, please report them by [opening an issue in the repository](https://github.com/moufidayoub11/alx-low_level_programming/issues).

