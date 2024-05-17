# ft_printf
## Description
ft_printf is a function in the C language aimed at recreating the printf function from the standard library. It allows formatting and displaying text with a syntax similar to printf.

## Features
Support for conversion specifiers: %s, %p, %i, %u, %c, %d, %x, %X.
Handling the display of the percent character (%) alone.
## Usage
Clone this repository to your local machine:
```bash
git clone https://github.com/your_username/ft_printf.git
```
Compile the project by executing the following command:
```bash
make
```
Use the ft_printf function in your code by including it and calling it as follows:
```bash
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    ft_printf("The address of this variable is: %p\n", &variable);
    ft_printf("The number is: %i\n", number);
    ft_printf("The unsigned value is: %u\n", unsigned_value);
    ft_printf("The character is: %c\n", character);
    ft_printf("The number is: %d\n", number);
    ft_printf("The hexadecimal value is: %x\n", hex_value);
    ft_printf("The hexadecimal value in uppercase is: %X\n", hex_value);
    ft_printf("A lone percent character: %%\n");
    return 0;
}
```
Compile your program with the ft_printf library:
```bash
gcc -o my_program my_program.c libftprintf.a
```
Run your program:
```bash
./my_program
```

## Authors
- rdedola
## License
This project is licensed under the MIT License. See the LICENSE file for more details.

