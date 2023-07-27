# 0x03-debugging

This subdirectory is part of the ALX Low-Level Programming repository. It includes C programs that demonstrate debugging techniques, as part of the ALX project 0x03-debugging.

## Programs

Here's a list of programs in this directory:

1. `0-main.c`: A program that debugs the function `positive_or_negative()`.
2. `1-main.c`: A program that corrects the code in order to prevent it from causing an infinite loop.
3. `2-largest_number.c`: A program that debugs the function `largest_number()`.
4. `3-print_remaining_days.c`: A program that corrects the code the function `print_remaining_days()`.

In addition, there's a header file: 

- `main.h`: This file includes the function prototypes used in this project.

## Getting Started

To use these programs:

1. Clone this repository:
```bash
$ git clone https://github.com/moufidayoub11/alx-low_level_programming.git
```

2. Navigate to the `0x03-debugging` directory:
```bash
$ cd alx-low_level_programming/0x03-debugging
```

3. Create a `main.c` file that includes `main.h` and calls the function you want to debug. For example, to call `positive_or_negative()`, your `main.c` might look like:
```c
#include "main.h"

int main(void)
{
    positive_or_negative();
    return (0);
}
```

4. Compile `main.c` with the .c file of the program you want to debug and execute:
```bash
$ gcc main.c program-name.c -o output && ./output
```

## Resources

For more information on debugging, consider the following resources:

- [Debugging](https://en.wikipedia.org/wiki/Debugging)
- [Rubber Duck Debugging](https://www.thoughtfulcode.com/rubber-duck-debugging-psychology/)

## Contributing

At this time, we are not accepting contributions to this subdirectory. This may change in the future, so please check back later. If you find any bugs or issues, please report them by opening an issue in the repository.
