# Printf
_printf is a custom version of the printf function

# Requirements

### General


* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall  -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you dont have to push them to your repo (if you do we wont take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called holberton.h
* Dont forget to push your header file
* All your header files should be include guarded
* Note that we will not provide the _putchar function for this project

### Compilation
* Your code will be compiled this way:

First Tab:
```sh
$ gcc -Wall -Werror -Wextra -pedantic *.c
```
* As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
* Our main files will include your main header file (holberton.h): #include holberton.h
* You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf. Example of test file that you could use:

# This function prints strings with a specified format.
Formats:
* c : Prints chars.
* s: Prints strings.
* d/i:  When you pass it an integer, it prints its correspondent ascii character for every digit. You may pass to it possitive and negative numbers.
* B: When you pass to it an integer it converts integers in 10 base to base 2 and prints  its correspondent ascii character for every digit.
* o: When you pass to it an integer it converts integers in 10 base to base 8 and prints  its correspondent ascii character for every digit.
* h: When you pass to it an integer it converts integers in 10 base to base 16 and prints  its correspondent ascii character for every digit.
and prints the letters in lowercase.
* H: When you pass to it an integer it converts integers in 10 base to base 16 and prints  its correspondent ascii character for every digit.
and prints the letters in uppercase.
Exceptions:
### When you write it a %%, it should print only one %.
