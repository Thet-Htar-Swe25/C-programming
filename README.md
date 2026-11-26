Thet-C++ Project Overview
=========================

This repository is a collection of C programming practice exercises,
homework programs, algorithms, and small console applications. The work
is organized mostly by programming topic. There is no single main
application: each source file can be compiled and run separately.

What I Have Been Working On
---------------------------

1. Basic input and output
   The intro/printtf-scanf and operator folders contain exercises using
   printf(), scanf(), fgets(), and getchar(). They cover reading numbers
   and text, formatted output, arithmetic, and operator precedence and
   associativity.

2. Control flow
   The control-flow, operators, and command_line folders cover if
   statements, switch statements, ternary operators, and command-line
   arguments. Some programs use menu choices or perform calculations
   based on user input.

3. Loops
   The loop and main/loop folders contain for, while, and do-while loop
   exercises. Typical examples include number conversion, calculators,
   nested loops, character strings, swapping values, finding minimum
   values, and looping through profiles or menu choices.

4. Functions
   The function and main/function folders practice defining and calling
   functions, passing values and arrays, calculating sums and averages,
   finding minimum and maximum values, case conversion, and using
   recursive functions.

5. Recursion
   The recursion exercises calculate factorial and Fibonacci values.
   Their functions call themselves until reaching a base case. One
   Fibonacci implementation prints the first ten numbers in the series.

6. Arrays and sorting
   The sorting folders contain bubble sort, selection sort, and insertion
   sort implementations. These programs compare array elements and swap
   their positions until the values are arranged in ascending order.
   The bubble sort example also prints the array after swaps so that the
   sorting process can be observed.

7. Searching
   The function/binary-search.c program practices finding an item using
   repeated division of a sorted array's search range.

8. Number and string processing
   The loop, leetcode, and main folders contain exercises that convert
   numbers, process decimal and binary values, manipulate characters,
   calculate lengths, and solve small coding problems.

9. Assignments and homework
   The assignments folder contains recorded assignment work such as
   decimal-to-binary conversion, factorial calculations, and Fibonacci
   numbers. The main folder also contains many named homework and
   general-practice programs.

10. General practice and experiments
    The main/general_practice.c file includes multiple C exercises, with
    the active example converting a name to uppercase and reporting each
    character's position. Other approaches and earlier experiments are
    retained as comments in the file.

Folder Guide
------------

intro/              printf, scanf, basic input/output, and reports
operators/          arithmetic, precedence, associativity, ternary operator
control-flow/       if statements, switch statements, and calculators
loop/               loop forms and loop-based algorithms
function/           custom functions, arrays, search, and recursion
sorting/            bubble, selection, and insertion sorting
assignments/        named assignment solutions
type_casting/       converting values between C data types
command_line/       reading arguments supplied by a terminal
leetcode/           small algorithm/coding challenge solutions
main/               later practice, homework, menu programs, and mixed work
main/control-flow/  menu and switch practice
main/function/      function and recursion practice
main/loop/          loop and homework practice
main/sorting/       sorting practice
.vscode/            local editor configuration
my-project/         directory that currently contains a placeholder README

Repository Notes
----------------

- Most files are standalone C source files with a main() function.
- Compiled Windows executable files are stored beside many source files.
- The repository currently has one commit:
  "C program file initial commit"
- The .gitignore file contains the folder name ".vscode", so editor settings
  are generally intended to be excluded from version control.

Typical Usage
-------------

Compile one source file with GCC, for example:

gcc loop/while-loop.c -o while-loop.exe
while-loop.exe

The executable name is only a suggestion. It can be replaced with any name
preferred for the program.
