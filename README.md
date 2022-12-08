
# PURPOSE:

This directory contains programs used to illustrate simple 
programming concepts in C.
The material here is meant to be used in conjunction with lectures in the class, not as stand alone teaching material.

In addition to the program files listed here there is also a SCRIPT/ directory. That contains a detailed description of the files and the order in which they can possibly be used in lectures.

Below we list files by topic:

##  TRIVIAL introductory stuff

* main.c  : A very trivial program with expressions include concept of blocks
* hello\_world.[ch] : A very trivial program with printf and include
* stats.c		 : Compute trivial statistic, average, some other stuff
* input\_output.c : A description of the normal way to use scanf and printf

### Understanding types:
conversions.c : print a character as integer and an integer as character etc.

### EXERCISE:

* fillin\_simple.c : A bunch of programs to fill in.
* print\_next\_char.c : Notions of charaters as integers

## IF

* find\_max.c : A simple use of max to find the maximum of three numbers.
	Note the use of {} . Are they needed ?
	There are examples with and without parameters. The ones with parameters are useful during discussion
	on function parameter passing.
* fillin\_if.c : A simple exercise to fill in to find if 3 numbers are in order

## SWITCH

* do\_op.c : A simple calculator. Also has a bit about character input.


## WHILE

* 3np1.c 	: The 3n+1 (Collatz's) conjecture  - simple while loop
* list\_avg\_w.c : 	Find the average of n numbers

## DO... WHILE

* list\_avg\_d.c : 	Find the average of n numbers
* fillin\_while.c:      Test your understanding of while loop

## FOR

* list\_avg\_f.c : 	Find the average of n numbers
* eratosthenes\_simple.c : Eratosthenes seieve - nested for loops
* simple\_event\_count.c : do coint flipping and count some event
* fillin\_findmax\_loop.c: Find the average in a loop, not predetermined n


## FUNCTIONS

* funcs.c : Simple notion of functions, prototypes, and declare before use
* funcs\_params.c : Function parameters
* funcs\_scope.c : scope with globals and locals and functions
* funcs\_scope2.c : re-emphasising scope with globals and locals and functions
* find\_max.c : this includes examples of passing parameters, left to the student to write main and call with parameters.

## RECURSION
* fact.c  : The recursive factorial program
		- simple notion of function and return
* recursion\_simple.c : a first notion of recursion with lots of examples
* gcd.c		 :	Compute gcd using recursion
* lcm.c		 :	Compute lcm using recursion

## POINTERS
* pointer\_simple.c : A simple program to play with pointers and see effect of improper use.

## ARRAYS with POINTERS AND FUNCTIONS
* list\_avg\_array.c : Read a list of numbers into an array and 
                       find the average.
* related\_arrays.c : Read two arrays (name[][] and scores) and search.
* apnf.c   : We write a sequence of funcitons illustrating how arrays 
		and pointers work in the context of function parameters.


## STRINGS
* string\library.c : Read an array of strings and do some replacement.
* split\_sentence.c : Split a long sentence into words.

## DYNAMIC MEMORY
* simple\_malloc.c : simple use of malloc
*

## MATRIX OPERATIONS
* matrix\_ops.c : Simple Matrix operations example
* matmul.c      : Matrix read, write, multiply (square matrix)
* matrix\_inv.c  : Matrix inversion from somewhere on the internet
* graph\_am.c : Graph adjacency matrix implementation

## STRUCTURES with arrays and pointers
* simple\_struct.c : Introduction to structures and how they are used
* linked\_list.c   : Structure used to created a linked list
* eratosthenes.c   : Using structures to remember result of previous divisions
* eratosthenes\_timer.c : Using a timer to see which version performs well.

## SEARCHING

* search.c: Has boh a simple search as well as binary search in it.

## SORTING

* basic\_sorts.c :  Basic sorting algorithms bubble, insertion, selection
* msort.c : Encodes merge sort
* qsort\_extraspace.c : quick sort using an additional array
* qsort.c	: Encodes quick sort - both in-place and extra space partitioning
* fillin\_qsort.c : We want to create some skeleton code so people can code in the quicksort.


## FILE OPERATIONS
* fileio.c & io.c	: fopen(), fclose(), fscanf(), fprintf()
* fillin\_file.c  : Has some sample code to fill in missing file ops
* array\_ops.c    : Has some functions for array read / write.
			Includes read from file.
			Includes string reads with malloc.

## MISCELLANEOUS
* simple\_timing.c 	    : A program using the timing functions
* timeutil.c and timeutil.h : Simple functions to measure code run time

