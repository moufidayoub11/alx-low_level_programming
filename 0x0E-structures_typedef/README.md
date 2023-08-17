# **0x0E-structures_typedef**

This subdirectory is part of the **ALX Low-Level Programming** repository. It contains a series of C programs and header files demonstrating the usage of structures and typedef in C programming, as part of an **ALX project**.

## **Files**

Here's a brief description of each file in this directory:

1. `1-init_dog.c`: Defines a function that initializes a variable of type `struct dog`.
2. `2-print_dog.c`: Defines a function that prints a `struct dog`.
3. `4-new_dog.c`: Defines a function that creates a new dog and returns a pointer to it.
4. `5-free_dog.c`: Defines a function that frees the memory allocated for a `struct dog`.
5. `dog.h`: A header file that contains the definition of `struct dog` and function prototypes.

## **Getting Started**

To use these programs and header files:

1. Clone this repository:
    ```
    git clone https://github.com/moufidayoub11/alx-low_level_programming.git
    ```

2. Navigate to the new subdirectory:
    ```
    cd alx-low_level_programming/0x0E-structures_typedef
    ```

3. To compile and run the programs that use these functions, you'll need to create a `main.c` file in which you include `dog.h` and use the functions you've defined. For example:

    ```c
    #include <stdio.h>
    #include "dog.h"

    int main(void)
    {
        struct dog my_dog;

        init_dog(&my_dog, "Buddy", 4.5, "Golden Retriever");
        print_dog(&my_dog);

        return (0);
    }
    ```

4. To compile and run `main.c`, use the following commands:

    ```sh
    gcc -o main main.c 1-init_dog.c 2-print_dog.c
    ./main
    ```

    You should see the details of the dog printed to the console.

5. Similarly, you can create new dogs, print their details, and free their memory using the functions you've defined.

## **Contributing**

At this time, we are not accepting contributions to this subdirectory. This may change in the future, so please check back later. If you find any bugs or issues, please report them by [opening an issue in the repository](https://github.com/moufidayoub11/alx-low_level_programming/issues).

Feel free to explore the various C programs and header files in this subdirectory to learn more about structures and typedef in C programming! Happy coding!
