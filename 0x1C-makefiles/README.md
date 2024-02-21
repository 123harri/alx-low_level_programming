# Project Makefiles

This project includes a set of Makefiles for building and managing a C project named "school."
The Makefiles are designed to follow specific requirements and constraints.
The project structure assumes source files with the extension `.c` and a header file named `m.h`.

## Makefile Overview

### Rules
- `all`: Builds the executable (`school`) by recompiling only the updated source files.
- `clean`: Deletes all Emacs and Vim temporary files along with the executable.
- `oclean`: Deletes the object files.
- `fclean`: Deletes all Emacs and Vim temporary files, the executable, and the object files.
- `re`: Forces recompilation of all source files.

### Variables
- `CC`: The compiler to be used (default: `gcc`).
- `SRC`: The source files (default: `main.c school.c`).
- `OBJ`: The object files generated from source files.
- `NAME`: The name of the executable (default: `school`).
- `RM`: The program to delete files (used twice).
- `CFLAGS`: Compiler flags (default: `-Wall -Werror -Wextra -pedantic`).

### Constraints
- No list of all the `.o` files.
- Only two occurrences of `$(RM)` are allowed.
- Only one occurrence of `$(CC)` is allowed.
- No use of `$(CFLAGS)`, but the compiler still uses the specified flags.
- No `%.o: %.c` rule.
- Works even if a file with the same name as one of the rules exists.
- The project won't compile if the header file `m.h` is missing.

## Usage

To build the project, run:

```bash
make
