# Implemented Standard printf() Function

*C program that simulate the standard `printf()` function*

## About Implemented Printf()

.This implementation use the [variadic function](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html) type to simulate `printf()` variety of handling different variables numbers and types
.Some other standard header files are in use beside the `stdarg.h`, eg. `string.h`, `stdlib.h`.
.Each formatting specifier will have its own function.

## Work principals

        By make use of the variadic function and its MACRO, our implemented function can take variable numbers of arguments with different types.

## Files and Directories

### src

        A directory that contains all the source files in this project

### lib

        A directory that contains the object files of all formatted specifiers functions

### test

        Contains some test file for our implemented printf().

### formatted_specifiers.h

        Contains the formatted specifier functions prototypes.

### main.h

        Contains primarily header files and all the other requirements.
