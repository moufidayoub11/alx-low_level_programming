# **0x08-recursion**

This subdirectory is part of the **ALX Low-Level Programming** repository. It contains a series of C programs demonstrating functionalities related to recursion, as part of an **ALX project**.

## **Files**

Here's a brief description of each file in this directory:

1. `0-puts_recursion.c`: Prints a string followed by a new line using recursion.
2. `1-print_rev_recursion.c`: Prints a string in reverse using recursion.
3. `2-strlen_recursion.c`: Returns the length of a string using recursion.
4. `3-factorial.c`: Computes the factorial of a given number using recursion.
5. `4-pow_recursion.c`: Computes the value of x raised to the power of y using recursion.
6. `5-sqrt_recursion.c`: Computes the natural square root of a number using recursion.
7. `6-is_prime_number.c`: Checks if a number is a prime number using recursion.
8. `100-is_palindrome.c`: Checks if a string is a palindrome using recursion.
9. `101-wildcmp.c`: Compares two strings and checks if they can be considered identical, with a special character '*' that can replace any string (including an empty string) using recursion.

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
     cd alx-low_level_programming/0x08-recursion
    ```

3. Create a `main.c` file that includes `main.h` and calls the function you want to run. For example, to call `puts_recursion()`, your `main.c` might look like:
    ```c
    #include "main.h"

    int main(void)
    {
        char *str = "Hello, world!";
        _puts_recursion(str);
        return (0);
    }
    ```

4. Compile `main.c` with the .c file of the program you want to run and execute:
    ```
     gcc main.c program-name.c -o output && ./output
    ```

## **Contributing**

At this time, we are not accepting contributions to this subdirectory. This may change in the future, so please check back later. If you find any bugs or issues, please report them by [opening an issue in the repository](https://github.com/moufidayoub11/alx-low_level_programming/issues).

Feel free to explore the various C programs in this subdirectory to learn more about recursion and its applications in programming! Happy coding!
