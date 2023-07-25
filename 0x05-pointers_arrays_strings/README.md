# **0x05-pointers_arrays_strings**

This subdirectory is part of the **ALX Low-Level Programming** repository. It contains a series of C programs demonstrating functionalities related to pointers, arrays, and strings, as part of an **ALX project**.

## **Files**

Here's a brief description of each file in this directory:

1. `0-reset_to_98.c`: *Resets the value of an integer pointer to 98.*
2. `100-atoi.c`: *Converts a string to an integer.*
3. `101-keygen.c`: *Generates random valid passwords for a program.*
4. `1-swap.c`: *Swaps the values of two integers using pointers.*
5. `2-strlen.c`: *Calculates the length of a string.*
6. `3-puts.c`: *Prints a string to the standard output.*
7. `4-print_rev.c`: *Prints a string in reverse.*
8. `5-rev_string.c`: *Reverses a string.*
9. `6-puts2.c`: *Prints every other character of a string, starting with the first character.*
10. `7-puts_half.c`: *Prints the second half of a string.*
11. `8-print_array.c`: *Prints n elements of an array of integers.*
12. `9-strcpy.c`: *Copies the string pointed to by `src` to the buffer pointed to by `dest`.*

The directory also includes:

- `main.h`: A header file containing the function prototypes used in these programs.
- `_putchar.c`: A file with the function `_putchar` that writes a character c to stdout.

## **Getting Started**

To use these programs:

1. Clone this repository:
    ```
    $ git clone https://github.com/moufidayoub11/alx-low_level_programming.git
    ```

2. Navigate to the new subdirectory:
    ```
    $ cd alx-low_level_programming/0x05-pointers_arrays_strings
    ```

3. Create a `main.c` file that includes `main.h` and calls the function you want to run. For example, to call `reset_to_98()`, your `main.c` might look like:
    ```c
    #include "main.h"

    int main(void)
    {
        int n = 10;
        int *p = &n;
        reset_to_98(p);
        return (0);
    }
    ```

4. Compile `main.c` with the .c file of the program you want to run and execute:
    ```
    $ gcc main.c program-name.c -o output && ./output
    ```

## **Contributing**

At this time, we are not accepting contributions to this subdirectory. This may change in the future, so please check back later. If you find any bugs or issues, please report them by [opening an issue in the repository](https://github.com/moufidayoub11/alx-low_level_programming/issues).
