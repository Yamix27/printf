# Custom Printf Implementation Group Project

Welcome to our collaborative project between Yamix27 and Hmddev23 to develop our own custom implementation of the printf function in the C programming language.

## Project Overview

The primary objective of this project is to create a personalized version of the printf function in C. Printf is commonly used to print formatted output to the standard output stream. Our custom implementation aims to support all the conversion specifiers and flags found in the standard printf function.


## Project Structure
The project is organized as follows:

- `_printf.c`: This file contains the main implementation of our custom printf function. It handles parsing the format string and calling appropriate functions to handle different conversion specifiers.

- `functions.c`: In this file, you'll find the implementations of functions to handle specific conversion specifiers. For example, functions for handling `%d` (signed integers), `%f` (floating-point numbers), `%o` (octal numbers), etc.

- `functions1.c`: This file contains additional functions to handle more conversion specifiers, such as `%x` (hexadecimal numbers), `%u` (unsigned integers), `%e` (scientific notation), etc.

- `functions2.c`: Here, you'll find further functions to handle additional conversion specifiers, if needed, or any other custom functionality related to printing.

- `get_flags.c`: This file implements functions to extract any flags used in the format string, like `+`, `-`, `0`, etc., which modify the output behavior.

- `get_precision.c`: Contains functions to retrieve the precision specified in the format string (e.g., `%.2f`).

- `get_size.c`: In this file, you'll find functions to handle size modifiers (e.g., `h`, `l`, `ll`, `j`, `z`) used with conversion specifiers.

- `get_width.c`: Implements functions to extract the field width specified in the format string (e.g., `%10d`).

- `handle_print.c`: This file includes functions responsible for the actual printing of characters and strings to the output.

- `main.h`: The header file contains function prototypes and necessary libraries used in the project.

- `README.md`: This is the current file you are reading, which contains essential information about the project.

- `utils.c`: Contains utility functions that might be required across multiple parts of the project.

- `write_handlers.c`: This file includes functions to handle writing to the output. It abstracts away the low-level write functionality for the custom printf implementation.

In this project structure, the main implementation of the custom `_printf` function is in the `_printf.c` file. The other source files contain functions responsible for handling specific conversion specifiers, such as printing a character and printing a string. The header file `main.h` provides function prototypes and necessary includes for the entire project. Each function is separated into its own source file for improved code organization and maintainability.


## Getting Started

To get started with our project, follow these steps:

1. Clone the project repository to your local machine using the following command:

   `````
   git clone https://github.com/Yamix27/printf.git
   ```

2. Change into the project directory:

   ````
   cd printf
   ````

3. Compile the project using the following command:

   ````
   gcc -Wall -Werror -Wextra -pedantic *.c -o printf
   ````

4. Run the project:

   ````
   ./printf
   ````

## Contribution Guidelines

We are excited to receive contributions to our project! If you wish to contribute, kindly follow these guidelines:

1. Fork the project repository to your own GitHub account.

2. Clone your forked repository to your local machine.

3. Create a new branch for your changes:

   ````
   git checkout -b my-feature-branch
   ````

4. Make your changes to the project code.

5. Commit your changes with a descriptive commit message:

   ````
   git commit -m "Add new feature"
   ````

6. Push your changes to your forked repository:

   ````
   git push origin my-feature-branch
   ````


7. Create a pull request from your forked repository to our main repository.

## Conclusion

We believe that our custom implementation of printf will be valuable and informative. Should you have any questions or feedback, please feel free to contact us. Thank you for your interest in our project and for any contributions you make!

