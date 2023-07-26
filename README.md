# Custom Printf Implementation Group Project

Welcome to our collaborative project between Yamix27 and Hmddev23 to develop our own custom implementation of the printf function in the C programming language.

## Project Overview

The primary objective of this project is to create a personalized version of the printf function in C. Printf is commonly used to print formatted output to the standard output stream. Our custom implementation aims to support all the conversion specifiers and flags found in the standard printf function.


## Project Structure

The project is organized as follows:

- `README.md`: The current file you are reading, containing project information.
- `main.h`: Header file containing function prototypes and necessary libraries.
- `_printf.c`: Contains the main implementation of our custom printf function.
- `print_char.c`: Implements the function to print a character.
- `print_string.c`: Implements the function to print a string.
- `handle_conversion_specifier.c`: Implements the function to handle the conversion specifier %c, %s, and %%.

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

