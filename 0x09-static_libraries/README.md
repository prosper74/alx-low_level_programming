# Static librabries in C

### 0. A library is not a luxury but one of the necessities of life

```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

- Step 1: copy the files from your existing projects beginning from `0x02-functions_nested_loops` <br />
  Example: cd into `0x02-functions_nested_loops` directory then run the below command <br />
  `cp _putchar.c 4-isalpha.c 3-islower.c 6-abs.c ../0x09-static_libraries/` <br />
  Do this for all the functions listed above

- Step 2: create your `main.h` and paste the prototypes
- Step 3: compile the .c files with this command `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c`
- Step 4: Create the static library `ar -rc libmy.a *.o`
- Step 5: Confirm the library `ar -t libmy.a`
- Step 6: Index the library `ranlib libmy.a`
- Step 7: List the files `nm libmy.a`
- Step 8: Push your files to github. i.e `main.h`, `libmy.a` and `README.md`

### 1. Without libraries what have we? We have no past and no future

- Step 1: create the `vi create_static_lib.sh` file
- Step 2: paste the bash script below and exit vim `esc` then `:wq` <br />
```
#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
```
- Step 3: Run the following commands <br />
`ls *.c` <br />
`ls *.a` <br />
`ar -t liball.a`

- Step 4: push the `create_static_lib.sh` file to github
