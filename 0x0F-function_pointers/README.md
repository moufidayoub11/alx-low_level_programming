# **0x0F-function_pointers**

This subdirectory is part of the **ALX Low-Level Programming** repository. It contains a series of C programs and header files demonstrating the usage of function pointers in C programming, as part of an **ALX project**.

## **Files**

Here's a brief description of each file in this directory:

1. `0-print_name.c`: Defines a function that prints a name using a function pointer.

2. `100-main_opcodes.c`: A program that prints the opcodes of its own main function.

3. `1-array_iterator.c`: Defines a function that iterates over an array and applies a given action function to each element.

4. `2-int_index.c`: Defines a function that searches for an integer in an array using a function pointer comparison.

5. `3-calc.h`, `3-get_op_func.c`, `3-main.c`, `3-op_functions.c`: A set of files that demonstrate the implementation of a calculator using function pointers and various operation functions.

6. `function_pointers.h`: A header file that contains the function prototypes used in these programs.

## **Getting Started**

To use these programs and header files:

1. Clone this repository:
    ```
    git clone https://github.com/moufidayoub11/alx-low_level_programming.git
    ```

2. Navigate to the new subdirectory:
    ```
    cd alx-low_level_programming/0x0F-function_pointers
    ```

3. To compile and run the programs, you'll need to create a `main.c` file in which you include the appropriate header and use the functions you've defined. For example, to use the calculator program:

    ```c
    #include <stdio.h>
    #include "function_pointers.h"

    int main(void)
    {
        int a = 10;
        int b = 5;
        char operator = '+';

        int result = (*get_op_func(operator))(a, b);
        printf("%d %c %d = %d\n", a, operator, b, result);

        return (0);
    }
    ```

4. To compile and run `main.c` along with the other required files, use the following commands:

    ```sh
    gcc -o calculator main.c 3-get_op_func.c 3-op_functions.c 3-main.c
    ./calculator
    ```

    You should see the result of the calculation printed to the console.

5. Similarly, you can use function pointers to print names, iterate over arrays, and perform other operations.

## **Contributing**

At this time, we are not accepting contributions to this subdirectory. This may change in the future, so please check back later. If you find any bugs or issues, please report them by [opening an issue in the repository](https://github.com/moufidayoub11/alx-low_level_programming/issues).

Feel free to explore the various C programs and header files in this subdirectory to learn more about function pointers and their usage in C programming! Happy coding!
