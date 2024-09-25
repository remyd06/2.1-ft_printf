# ft_printf 🖨️

Welcome to the **ft_printf** project! This project is a simplified version of the C standard `printf` function. It's designed to help understand the intricacies of formatted output in C and improve low-level programming skills.

## Introduction 🚀

The **ft_printf** function mimics the behavior of the standard `printf` in C. It handles various format specifiers like `%d`, `%s`, `%x`, and more, enabling formatted output with different data types. The main goal of this project is to implement a custom `printf` function from scratch without using the original `printf` from the C Standard Library.

## Features ✨

- **Custom Formatted Output**: Supports different format specifiers (`%d`, `%s`, `%x`, etc.).
- **Hexadecimal Printing**: Handle both uppercase and lowercase hexadecimal output.
- **Pointer Display**: Print memory addresses using the `%p` specifier.
- **Unsigned Numbers**: Print unsigned integers with `%u`.
- **Error Handling**: Basic error management and return value to handle the number of characters printed.

## Supported Format Specifiers 📑

Here are the format specifiers that **ft_printf** supports:

- **`%c`**: Prints a single character.
- **`%s`**: Prints a string of characters.
- **`%p`**: Prints a pointer (memory address).
- **`%d`/`%i`**: Prints an integer in base 10.
- **`%u`**: Prints an unsigned integer.
- **`%x`**: Prints an unsigned hexadecimal number (lowercase).
- **`%X`**: Prints an unsigned hexadecimal number (uppercase).
- **`%%`**: Prints a literal `%` character.

## Installation ⚙️

To get started with **ft_printf**, simply clone this repository and compile the project using the provided **Makefile**:

```bash
git clone https://github.com/yourusername/ft_printf.git
cd ft_printf
make
```
This will generate the `libftprintf.a` library, which you can link with your projects.

## Usage 🖥️

You can integrate the `ft_printf` function into your project by including the header file `ft_printf.h` and linking the compiled library.
Example:
```bash
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, World!\n");
    ft_printf("This is a number: %d\n", 42);
    return (0);
}

```

## Code Overview 🧩

**Key Functions:**
1. `ft_printf:`
- The main function that interprets format strings and arguments, dispatching to the appropriate helper functions.
2. Helper Functions:
- `ft_putchar`: Outputs a single character.
- `ft_putstr`: Outputs a string.
- `ft_putnbr`: Outputs an integer.
- `ft_putnbr_hex_low/ft_putnbr_hex_upp`: Outputs an unsigned hexadecimal number in lower/uppercase.
- `ft_print_adress`: Prints a pointer's address.
3. `scan`: A utility function that scans format specifiers and dispatches arguments to the corresponding helper function.

## Makefile 🛠️

The Makefile contains rules to compile the `libftprintf.a` library and manage the project files:
- Build the library:
 ```bash
make
```
- Clean object files:
 ```bash
make clean
```
- Remove the library and object files:
 ```bash
make fclean
```
- Rebuild everything:
 ```bash
make re
```

## Testing 🧪

Once you've built the project, you can test it by writing custom programs that utilize ft_printf to see if it behaves as expected.
Example test:
 ```bash
int	main(void)
{
	char *str;
	int	i;

	str = "test";
	i = 0;
	printf("\e[1;4;31mFT_PRINTF\e[0;37m\n\n");
	ft_printf("For \"%%d\" --> %d\n", 3);
	ft_printf("For \"%%p\" --> %p\n", &str);
	ft_printf("For \"%%s\" --> %s\n", str);
	ft_printf("For \"%%u\" --> %u\n", 42);
	ft_printf("For \"%%x\" --> %x\n", -1);
	ft_printf("For \"%%X\" --> %X\n", -1);
	ft_printf("For \"%%n\" --> %i\n", 3);
	ft_printf("For \"%%\"  --> %%\n");
	printf("\n\e[1;4;31mORIGINAL PRINTF\e[0;37m\n\n");
	printf("For \"%%d\" --> %d\n", 3);
	printf("For \"%%p\" --> %p\n", &str);
	printf("For \"%%s\" --> %s\n", str);
	printf("For \"%%u\" --> %u\n", 42);
	printf("For \"%%x\" --> %x\n", -1);
	printf("For \"%%X\" --> %X\n", -1);
	printf("For \"%%n\" --> %i\n", 3);
	printf("For \"%%\"  --> %%\n");
}
```
This will show you the result between the real printf and my ft_printf.

## Conclusion 🎉
The **ft_printf** project is an excellent way to improve your understanding of variadic functions, formatted output, and low-level programming in C. The project provides a robust foundation for handling formatted strings and can be integrated into more complex projects where custom `printf` functionality is needed.

Happy coding! 💻




