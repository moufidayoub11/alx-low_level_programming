# **0x07-pointers_arrays_strings**

This subdirectory is part of the **ALX Low-Level Programming** repository. It contains a series of C programs demonstrating functionalities related to pointers, arrays, and strings, as part of an **ALX project**.

## **Files**

Here's a brief description of each file in this directory:

1. `0-memset.c`: Fills memory with a constant byte.
2. `1-memcpy.c`: Copies memory area.
3. `2-strchr.c`: Locates a character in a string.
4. `3-strspn.c`: Gets the length of a prefix substring.
5. `4-strpbrk.c`: Searches a string for any of a set of bytes.
6. `5-strstr.c`: Locates a substring.
7. `7-print_chessboard.c`: Prints the chessboard.
8. `8-print_diagsums.c`: Prints the sums of the two diagonals of a square matrix.
9. `100-set_string.c`: Sets the value of a pointer to a char.
10. `101-crackme_password`: A file that contains a password for a crackme program.

The directory also includes:
- `main.h`: A header file containing the function prototypes used in these programs.

## **Getting Started**

To use these programs:

1. Clone this repository:
    ```
      git clone https://github.com/moufidayoub11/alx-low_level_programming.git
    ```

2. Navigate to the new subdirectory:
    ```
      cd alx-low_level_programming/0x07-pointers_arrays_strings
    ```

3. Create a `main.c` file that includes `main.h` and calls the function you want to run. For example, to call `memcpy()`, your `main.c` might look like:
    ```c
     #include "main.h"

    int main(void)
    {
        char dest[100];
        char src[] = "Hello, world!";
        _memcpy(dest, src, sizeof(src));
        printf("%s\n", dest);
        return (0);
    }
    ```

4. Compile `main.c` with the .c file of the program you want to run and execute:
    ```
      gcc main.c program-name.c -o output && ./output
    ```

## **Contributing**

At this time, we are not accepting contributions to this subdirectory. This may change in the future, so please check back later. If you find any bugs or issues, please report them by [opening an issue in the repository](https://github.com/moufidayoub11/alx-low_level_programming/issues).

Feel free to explore the various C programs in this subdirectory to learn more about pointers, arrays, and strings in the context of low-level programming! Happy coding!
