# **0x0C-more_malloc_free**

This subdirectory is part of the **ALX Low-Level Programming** repository. It contains a series of C programs demonstrating advanced functionalities related to dynamic memory allocation using `malloc` and `free` as part of an **ALX project**.

## **Files**

Here's a brief description of each file in this directory:

1. `0-malloc_checked.c`: Allocates memory using `malloc` and checks if the allocation was successful.

2. `100-realloc.c`: Reallocates a memory block using `malloc` and `free`.

3. `101-mul.c`: A program that multiplies two positive numbers.

4. `1-string_nconcat.c`: Concatenates two strings up to a specific number of bytes.

5. `2-calloc.c`: Allocates memory for an array, setting all elements to zero using `malloc`.

6. `3-array_range.c`: Creates an array of integers containing all values from `min` to `max`.

7. `main.h`: A header file containing the function prototypes used in these programs.

8. `_putchar.c`: A file with the function `_putchar` that writes a character c to stdout.

## **Getting Started**

To use these programs:

1. Clone this repository:
    ```
    git clone https://github.com/moufidayoub11/alx-low_level_programming.git
    ```

2. Navigate to the new subdirectory:
    ```
    cd alx-low_level_programming/0x0C-more_malloc_free
    ```

3. To compile and run `0-malloc_checked.c`, you need to create a `main.c` file that includes `main.h` and uses the `malloc_checked` function. Here's an example `main.c`:

    ```c
    #include "main.h"
    #include <stdio.h>

    int main(void)
    {
        void *ptr = malloc_checked(1024); // Allocate 1024 bytes
        if (ptr == NULL)
        {
            printf("Memory allocation failed\n");
            return (1);
        }
        printf("Memory allocation successful\n");
        free(ptr); // Don't forget to free the allocated memory
        return (0);
    }
    ```

4. Compile both `0-malloc_checked.c` and `main.c` using the following command:

    ```
    gcc -o malloc_test 0-malloc_checked.c main.c
    ```

5. Run the compiled program:

    ```
    ./malloc_test
    ```

    You should see either "Memory allocation successful" or "Memory allocation failed" depending on the result of the allocation.

6. Similarly, compile and run the other programs in a similar way.

## **Contributing**

At this time, we are not accepting contributions to this subdirectory. This may change in the future, so please check back later. If you find any bugs or issues, please report them by [opening an issue in the repository](https://github.com/moufidayoub11/alx-low_level_programming/issues).

Feel free to explore the various C programs in this subdirectory to learn more about advanced dynamic memory allocation using `malloc`, `calloc`, and `realloc` in C programming! Happy coding!
