
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

### EXERCISE:

* fillin\_simple.c : A bunch of programs to fill in.
* print\_next\_char.c : Notions of charaters as integers

## IF

* find\_max.c : A simple use of max to find the maximum of three numbers.
	Note the use of {} . Are they needed ?
* fillin\_if.c : A simple exercise to fill in to find if 3 numbers are in order

## SWITCH

* do\_op.c : A simple calculator


## WHILE

* 3np1.c 	: The 3n+1 (Collatz's) conjecture  - simple while loop
* list\_avg\_w.c : 	Find the average of n numbers

## DO... WHILE

* list\_avg\_d.c : 	Find the average of n numbers

## FOR

* list\_avg\_f.c : 	Find the average of n numbers
* eratosthenes.c :	: Eratosthenes seieve - big program - preprocessor - while loop
* simple\_event\_count.c : do coint flipping and count some event

## EXERCISE

* fillin\_findmax\_loop.c: Find the average in a loop, not predetermined n

## FUNCTIONS

* funcs.c : Simple notion of functions, prototypes, and declare before use
* funcs\_params.c : Function parameters
* funcs\_scope.c : re-emphasising scope with globals and locals and functions
* fact.c  : The recursive factorial program
		- simple notion of function and return

## ARRAYS+POINTERS+FUNCTIONS-PARAMETERS

* apnf.c   : We write a sequence of funcitons illustrating how arrays and pointers work in the context of function parameters

## SEARCHING

* search.c: Has boh a simple search as well as binary search in it.

## SORTING

* basic\_sorts.c :  Basic sorting algorithms bubble, insertion, selection
* msort.c : Encodes merge sort
* qsort.c	: Encodes quick sort - both in-place and extra space partitioning
* fillin\_qsort.c : We want to create some skeleton code so people can code in the quicksort.

## ARRAYS

* related\_arrays.c : Read two arrays (name[][] and scores) and search.
* string\library.c : Read an array of strings and do some replacement.


## MATRIX OPERATIONS

* matrix\_ops.c : Simple Matrix operations example
* matmul.c      : Matrix read, write, multiply (square matrix)
* matrix\_inv.c  : Matrix inversion from somewhere on the internet

## FILE OPERATIONS

* fileio.c & io.c	: fopen(), fclose(), fscanf(), fprintf()
* fillin\_file.c  : Has some sample code to fill in missing file ops


