# 0x04-more_functions_nested_loops

This subdirectory is part of the ALX Low-Level Programming repository. It contains a series of C programs demonstrating various functionalities, as part of an ALX project.

## Programs

Here's a brief description of each program in this directory:

1. `0-isupper.c`: Checks for uppercase characters.
2. `1-isdigit.c`: Checks for a digit (0 through 9).
3. `2-mul.c`: Multiplies two integers.
4. `3-print_numbers.c`: Prints the numbers, from 0 to 9.
5. `4-print_most_numbers.c`: Prints the numbers, from 0 to 9, except 2 and 4.
6. `5-more_numbers.c`: Prints 10 times the numbers, from 0 to 14.
7. `6-print_line.c`: Draws a straight line in the terminal.
8. `7-print_diagonal.c`: Draws a diagonal line on the terminal.
9. `8-print_square.c`: Prints a square.
10. `9-fizz_buzz.c`: Implements the Fizz-Buzz test.
11. `10-print_triangle.c`: Prints a triangle.
12. `100-prime_factor.c`: Finds and prints the largest prime factor of the number 612852475143.
13. `101-print_number.c`: Prints an integer.

The directory also includes:

- `main.h`: A header file containing the function prototypes used in these programs.
- `_putchar.c`: A file with the function `_putchar` that writes a character c to stdout.

## Getting Started

To use these programs:

1. Clone this repository:
```
$ git clone https://github.com/moufidayoub11/alx-low_level_programming.git
```

2. Navigate to the new subdirectory:
```
$ cd alx-low_level_programming/0x04-more_functions_nested_loops
```

3. Create a `main.c` file that includes `main.h` and calls the function you want to run. For example, to call `isupper()`, your `main.c` might look like:
```c
#include "main.h"

int main(void)
{
    _isupper('A');
    return (0);
}
```

4. Compile `main.c` with the .c file of the program you want to run and execute:
```
$ gcc main.c program-name.c -o output && ./output
```

## Contributing

At this time, we are not accepting contributions to this subdirectory. This may change in the future, so please check back later. If you find any bugs or issues, please report them by opening an issue in the repository.
