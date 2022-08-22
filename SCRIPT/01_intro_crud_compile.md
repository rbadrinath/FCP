
# Computer Command Familiarity
It is important to be familiar with the basic commands of the 
computer system you are using in order to be able to 
learning programing by doing!
The text below assumes you are using a Linux system like Ubuntu.

## Simple Linux Commands
### Objective: Student to be able to do the following:
  * Basic linux commands echo, exit,
			   ls, pwd, mkdir, cd, 
                           cat, cp, mv, 
		           rm, rmdir
  * Make CRUD changes to files
  * Use an editor
  * For a C program COMPILE, EDIT, RUN
  * A bit of history

### Notes:
  * First class to be boring to those with programming experience already
  * Are the students able to 

## Commands to Create and Edit Files
### Objective: CRUD files 
  * Create: copy, rename files
  * Read:   cat files
  * Update: edit files, 
  * Delete: delete files
  * Windows editor to use C/C++ IDE pre insalled, or Notepad++)
  * Linux editor to use vi / vim or gedit or atom...
### Exercise:  
  * A bunch of programs we will refer to here are available on github
    * Go to github.com/rbadrinath/FCP
    * Now you can download a file like 3np1.c to your 
      local computer using the following procedure:
    * Click on a file 3np1.c 
    * Now you right click on "Raw" and then select the "Save as" menu item
      to save the file on your local computer.
    * An alternate is to click the "Copy" icon (Two overlapping squares)
      and save to a local file using an editor like vim or gedit.
  * Download the file 3np1.c
  * Take an existing file and copy it to create a new file.	cp f1 f2
    * Rename the file using mv   				mv f2 f3
    * View the contents of the file using cat.		cat f3
    * Edit the file using an editor.			gedit f3
    * Delete the file using rm				rm f3
  * Repeat this exercise - The teacher will repeatedly ask people to do things

## Compile and Execute Programs
### Objective: Compile and Execute Programs
  * Lets start by taking a 'largish' example. Sieve of eratosthenes.
  *  Notion of writing a program
  * Notion of compiling a program
  * Notion of execution
### Exercise: 
  *   Download sieve of eratosthenes.c, compile, execute
  *	Make small changes just to the output ie edit. 
        Again compile and execute.

## The Edit Compile Execute Loop
* Objective: Be comfortable making small changes to a program, recompile, etc
  * lets also use the opportunity to play with the program statements.

* EXERICISE: Can you download the same program and do what you saw in class?
  * eratosthenes.c
  * Can you do it for another program ?

* Exercise: download, compile and execute each of these:
  * fact.c
  * 3np1.c
  * stats.c

* Exercise: download, compile and execute:
  * hello\_world.c and hello\_world.h    : A program can be split over files.
  * simple\_timing.c and timeutil.c and timeutil.h

* End Class Exercise: 
  Can you download the following C program and compile it and
  make it run on your PC: https://www.sanfoundry.com/c-program-find-inverse-matrix/
  Now change it a little bit - perhaps change the printf statements a little.


(We will look deeper into what is a statement or expression and all that
later on... the next thing.)

* End of Class Check:
  * ANSWER THE FOLLOWING:
    * How to / What is the command on this computer to compile a program?
    * How to / Why do you need to recompile when you edit a program?
    * Try objdump --disassemble on some program a.out to see what 
		the final executable looks like.
	
# History:  
  Now to some historical perspective of computing
  * What lead to the invention of the computer?
  * The stored program model of computation
  * What problems were solved by early computers?
  * Where did the personal computer come in?
  * What enabled the growth of computers ?
  * The early days of programming.
  * The growth of programming languages as the interface to computation.
  * Imperative programming languages and the rest.
  * Other branches of computer science
    * Formal Languages and Automata
    * Computer Arch and operating systems
    * Data structures and Algorithms
    * Discrete mathematics - combinatorics and graph theory
  The notion of algorithms : What it means to computer programming
    * all of programming is a certian way to implement algorithms

* END OF CLASS CHECK:
  * How is a computer different from a calculator
  * What do you think you will learn in this class
