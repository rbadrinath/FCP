


# Expressions, Statements and Blocks in C
## Objective: 
  * Notion of expressions, statements, blocks
      ( Lets try to look at programs and what its elements are. )
  * Notion of constants and opetators
  * Write a program independently
  * Notion of a variable
  * Notion of value vs address

## Expressions and Values
  * A program as  a collection of expressions.
  * Expressions are used mainly to get values.
  * They can be arithmetic, logical, etc.
  * See expr.c
  * Here are many expressions
~~~text
5+3 is an expression.  
5        (note that expressions dont need to have operators)  
6.023 * 2    ( numbers can be non-integers too)  
'R'   is a sigle character expression  
Another expression is "hello world"   (this is a sequence of characters)  
5 < 3 	 is a logic expression  
Same with 5 < 3 && 2 > 1   
~~~
Clearly we can put paranethesis to make it clear to us (and to others)  
~~~text
(5-3)-2 
(5-(3-2)
5-3-2
~~~

  * An arithmetic expression can be converted to a statement by using a ";"
  at the end.
  
  * Lets write a fully working program with this expression.

  * Exercise: Download and edit main.c

  * Lets summarize the learning:  
~~~text
| Expressions		| "Type" of the value in C
| --------------------- | ------------------------
| 5			| integer
| 5+3			| integer
| 6.023 * 2		| float    (real number)
| 'c'			| character
| "Hello world"		| character sequence (a pointer to the first character)
| sin(0.5)   		| (function call expression resulting in) a floating point value
~~~

## Notions of constants and operators in expressions

## Practicalities
  * Expressions are good but 
       we would like to see something when a program is run
  * We can use some help to print using puts, putchar or printf
  
## Notion of Stored Values and Variables
  * storing values is an important expression using the familiar '=' sign
  variables have address as well as value, but expressions only have value
  * Notions of memory
    * MODEL of storage and instructions. 
    * go back to objdump --disassemble
## Concept of definition of variables 
    * List of types in variable definitions
    * Notion of scope
    *  (also declaration) - how with extern declaration of a global
    *  We will learn more when we talk about functions

## Lets write a fully working proram with the storing idea
## Proacticality - reading and printing
   * expression and printing is good, but we may want to read something 
   into variables instead of fixing them in the program
   * we can use some help to read using scanf

## Exercise: 
  * The game of guessing 2(x+10)-2x = 20
  * Is it possible to get the address value ?

