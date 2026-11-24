# Project printf

## Contributors

- Bradley Richez
- Nga Abena Georges
- Terkouche Olivier

## Objective

- Make a printf equivalent on our own while respecting a set of constraints.
- Our printf should :
  - Print a string given as a parametter
  - Be able to recognise flags for 5 distinct cases :
    - `"%c"` - a char varriable - task 0
    - `"%s"` - a string - task 0
    - `"%%"` - indicator to just print "%" - task 0
    - `"%d"` - an int varriable - task 1
    - `"%i"` - a base 10 number - task 1
  - Be able to transform these flags with the variable they reffer to in the final string we print.
  - Be able to take as many parametters as necessary to handle these flag calls.

## Constraints

- All the files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
- All the files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all your functions should be included in your header file called main.h
- All the header files should be include guarded
- Authorized functions and macros :

    - `write (man 2 write)`
    - `malloc (man 3 malloc)`
    - `free (man 3 free)`
    - `va_start (man 3 va_start)`
    - `va_end (man 3 va_end)`
    - `va_copy (man 3 va_copy)`
    - `va_arg (man 3 va_arg)`

## Organisation

- Each contributor has it's own branch on the Repo he can work on alone.
- We reunite regularlly to work together, review what was done and merge to the main / solve enventual conflicts.