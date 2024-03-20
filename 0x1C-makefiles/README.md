# C - Makefiles

### What are make and Makefiles?

- `make` is a utility in Unix-like operating systems that automates the building and compilation of executable programs and libraries from source code files.
- A `Makefile` is a special file that contains rules and instructions for make to follow when building a project. It specifies how the source code files are compiled and linked to generate the final executable or libraries.

### When, why, and how to use Makefiles?

- Makefiles are used when you have a project consisting of multiple source code files that need to be compiled and linked together.
- They are particularly useful for managing large software projects where recompiling only the modified files can save time and resources.
- Makefiles allow developers to define dependencies and rules for building the project, making the build process more efficient and reproducible.

### What are rules and how to set and use them?

Rules in a Makefile specify how to build target files from source files.
Each rule consists of a target, dependencies, and commands.
The target is the file that needs to be built, dependencies are the files that the target depends on, and commands are the shell commands to execute to build the target.
Example rule syntax:

```
target: dependencies
    commands
```

### What are explicit and implicit rules?

- Explicit rules are rules explicitly defined in the Makefile with specific targets and dependencies.
- Implicit rules are predefined rules in make that are used when no explicit rule matches the target file.
- Implicit rules are based on file extensions (e.g., .c files are compiled into object files .o) and are automatically applied by make without needing to be specified in the Makefile.

### What are the most common/useful rules?

Some common rules in Makefiles include:
- all: Builds the entire project.
- clean: Removes all generated files (object files, executables).
- install: Installs the built executable or libraries into the system directories.
- uninstall: Uninstalls the previously installed files.
- test: Runs automated tests on the built executable.

### What are variables and how to set and use them?

- Variables in Makefiles are used to store values that can be reused throughout the file.
- They are defined using the syntax `VARIABLE_NAME = value`.
- Variables can be referenced using `$(VARIABLE_NAME) syntax`.
Example:

```
CC = gcc
CFLAGS = -Wall -Wextra
SOURCES = main.c file1.c file2.c

program: $(SOURCES)
    $(CC) $(CFLAGS) $(SOURCES) -o program
```

In this example, CC, CFLAGS, and SOURCES are variables storing the compiler, compiler flags, and source files respectively.
