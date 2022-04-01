0x0A. C - argc, argv

Resources
Read or watch:

Arguments to main
argc and argv
What does argc and argv mean?
how to compile with unused variables
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General

How to use arguments passed to your program
What are two prototypes of main that you know of, and in which case do you use one or the other
How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file
You are allowed to use the standard library
Quiz questions
Great! You've completed the quiz successfully! Keep going! (Hide quiz)
Question #0
What is argc?


The number of command line arguments


A flag set to 1 when command line arguments are present


The size of the argv array


The length of the first command line argument

Question #1
What is argv?


An array containing the program compilation flags


An array containing the program command line arguments


An array of size argc

Question #2
What is argv[0]


NULL


It does not always exist


The first command line argument


The program name

Question #3
What is argv[argc]?


NULL


It does not always exist


The first command line argument


The program name


The last command line argument

Question #4
In the following command, what is argv[2]?

$ ./argv My School is fun

NULL


./argv


My


School


My School


is


fun


is fun


My School is fun

Question #5
In the following command, what is argv[2]?

$ ./argv "My School" "is fun"

NULL


./argv


My


School


My School


is


fun


is fun


My School is fun

Question #6
In the following command, what is argv[2]?

$ ./argv "My School is fun"

NULL


./argv


My


School


My School


is


fun


is fun


My School is fun
