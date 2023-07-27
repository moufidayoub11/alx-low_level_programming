# 0x02-functions_nested_loops

This subdirectory is part of the ALX Low-Level Programming repository. It contains C programs that showcase the use of functions and nested loops, as part of the ALX project 0x02-functions_nested_loops.

## Programs

Here's a list of programs in this directory:

1. `0-putchar.c`: A program that prints "_putchar", followed by a new line.
2. `1-alphabet.c`: A program that prints the alphabet, in lowercase, followed by a new line.
3. `2-print_alphabet_x10.c`: A program that prints the alphabet 10 times, in lowercase, followed by a new line.
4. `3-islower.c`: A program that checks for lowercase character.
5. `4-isalpha.c`: A program that checks for alphabetic character.
6. `5-sign.c`: A program that prints the sign of a number.
7. `6-abs.c`: A program that computes the absolute value of an integer.
8. `7-print_last_digit.c`: A program that prints the last digit of a number.
9. `8-24_hours.c`: A program that prints every minute of the day, from 00:00 to 23:59.
10. `9-times_table.c`: A program that prints the 9 times table, starting with 0.
11. `10-add.c`: A program that adds two integers and returns the result.
12. `11-print_to_98.c`: A program that prints all natural numbers from `n` to 98.
13. `100-times_table.c`: A program that prints the `n` times table, starting with 0.
14. `101-natural.c`: A program that computes and prints the sum of all the multiples of 3 or 5 below 1024.
15. `102-fibonacci.c`: A program that prints the first 50 Fibonacci numbers, starting with 1 and 2.
16. `103-fibonacci.c`: A program that finds and prints the sum of the even-valued terms in the Fibonacci sequence whose values do not exceed 4,000,000.
17. `104-fibonacci.c`: A program that finds and prints the first 98 Fibonacci numbers.

## Getting Started

To utilize these programs:

1. Clone this repository:
```bash
$ git clone https://github.com/moufidayoub11/alx-low_level_programming.git
```

3. Go to `0x02-functions_nested_loops` directory:
```bash
$ cd alx-low_level_programming/0x02-functions_nested_loops
```

4. Create a `main.c` file that includes `main.h` and calls your chosen function. For example, to call `_putchar()`, your `main.c` might look like:
```c
#include "main.h"

int main(void)
{
    _putchar();
    return (0);
}
```

4. Compile `main.c` with your chosen .c file (i.e., `program-name.c`) and execute:
```bash
$ gcc main.c program-name.c -o output && ./output
```
Replace `program-name.c` with the .c file of your chosen program.

For the `0-putchar.c`, `100-times_table.c`, `101-natural.c`, `102-fibonacci.c`, `103-fibonacci.c`, `104-fibonacci.c` programs, directly compile and run:
```bash
$ gcc program-name.c -o output && ./output
```
Replace `program-name.c` with the .c file of the chosen program.

## Resources

For more information on functions, nested loops, and related topics in C, consider the following resources:

- [C Programming For Beginners - Master the C Language](https://www.udemy.com/course/c-programming-for-beginners-/)
- [C Tutorial - Functions](https://www.learn-c.org/en/Functions)
- [C Tutorial - Loops](https://www.learn-c.org/en/Loops)

## Contributing

At this time, we are not accepting contributions to this subdirectory. This may change in the future, so please check back later. If you find any bugs or issues, please report them by opening an issue in the repository.
