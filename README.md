# Custom Printf Implementation

This project implements a custom version of the `printf` function in C. It supports basic format specifiers including `%s` for strings, `%d` for integers, `%f` for doubles, and `%c` for characters.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Functionality](#functionality)
- [Example](#example)
- [Contributing](#contributing)


## Introduction

The custom `printf` function, named `my_printf`, is implemented in C and provides basic functionality for formatted output to the console. This implementation supports a limited set of format specifiers and demonstrates how to handle variable arguments in C.

## Features

- **String Support**: Print strings using `%s`.
- **Integer Support**: Print integers using `%d`.
- **Double Support**: Print double values using `%f`.
- **Character Support**: Print characters using `%c`.
- **Basic Error Handling**: Manage invalid format specifiers.

## Installation

To use the custom `my_printf` function:

1. Clone the repository:
   ```sh
   git clone https://github.com/recabet/Printf.git 
   ```

2. Navigate to the project directory:
```sh
   cd Printf
```
3. Compile the program (assuming "gcc" is installed):
```sh 
    gcc -o main.c my_printf.c main
```
4. Run the executable:
```sh 
    ./main
```
## Functionality

### Detailed Functions
1. my_chardup: Duplicates a character into a static buffer.

2. my_putchar: Writes a single character to the console.

3. my_strlen: Computes the length of a string.

4. my_puts: Writes a string followed by a newline to the console.

5. my_putint: Writes an integer to the console.

6. my_putdouble: Writes a double value to the console.

7. my_printf: Custom implementation of the printf function supporting basic format specifiers.

## Example

### Here's an example of how to use the custom my_printf function in C:

```c
#include "my_printf.h"

int main(int argc,char**argv)
{
    my_printf("String: %s\n", "ARG 2");
	
    my_printf("Integer: %d\n", 123);
	
    my_printf("Double: %f\n", 456.789);
	
    my_printf("Character: %c\n", 'A');
	
    return 0;
}


```

## Contributing

Contributions to this project are welcome! If you'd like to contribute, please follow these steps:

1. Fork the repository.
2. Create a new branch (git checkout -b feature)
4. Make your changes.
5. Commit your changes (git commit -am 'Add new feature')
6. Push to the branch (git push origin feature)
7. Create a new Pull Request.

Please ensure that your code follows the existing coding style and conventions.