# About make

This is a *very brief* introduction to get you going with the **make**.  

## The make command

There is a command in Linux called **make**.  It reads instructions from a file called a *makefile* which contains rules. Typically the command is invoked as:
   > $ make *-f  makefile*  *target* 

   The *-f makefile* can be ommited, if the name of the *makefile* is **Makefile**.
   
   Further if *target* itself is ommitted, the first of the targets is
   assumed.
   > $ make *target*     

   is quite a common usage. You might wonder "*What is a target?*". In our course the target is an execuable. A *rule*
   is a command to create a target. So our rules are compilation commands that we would normally use on the command line.
   We show how to write a makefile by showing a few examples below.
   > For our example below we assume these files  
   > file "ops.c" has a few functions; 
   > file "main.c" has a main() which uses these functions;  
   > "ops.h" has prototypes and possiby other declarations, and is included in both the above ".c" files.  
   > 'myprog' is the executable we will create, also called the 'target'

## Version 00 of the makefile
This is a simple minimal makefile, we just say how to build the executable
<blockquote>
<pre>
# This is Makefile.v00
# myprog is the target, the rule lines follow afer target line
# *Important* Each rule line has a TAB character at its begining
myprog:
      gcc ops.c mymain.c -o myprog
</pre>
</blockquote>

Assuming this file is named *Makefile*, each time we execute the command 
'make myprog' it will run the compilation command if 'myprog' doesnt exist. Since
'myprog' is the first (and only) target we could also just say 'make'.

Here is a sample execution:
<pre>
    $ make
    gcc ops.c mymain.c -o myprog
    $ make
    make: 'myprog' is up to date.
    $ rm myprog
    $ make
    gcc ops.c mymain.c -o myprog
    $
</pre>

We now make a small change. This small change will cause the make to recompile the program 
any time either ops.c or ops.h or mymain.c files change.

## Version 01 of the makefile
<blockquote>
<pre>
# This is Makefile.v01
# We list how to build the executable
myprog: ops.c ops.h mymain.c
    gcc ops.c mymain.c -o myprog
</pre>
</blockquote>
The only difference is the ops.c ops.h and mymain.c listed on the target line. The items after the colon ":" on the target line are called the *dependencies*. If any of the dependencies change, then it is assumed that the corresponding target must be rebuilt.
Here is a sample session:
<pre>
    $ make
    gcc ops.c mymain.c -o myprog
    $ make
    make: 'myprog' is up to date.
    $ vim ops.c                   This line indicates using vim and changing the file perhaps just some comments
    $ make
    gcc ops.c mymain.c -o myprog
    $
</pre>

## Version 1 of the makefile

Now we make another change. Instead of compiling myprog from the C files. We first have commands to create the objects files 'ops.o' and 'mymain.o' from the sources using gcc with a '-c' flag. Then we create 'myprog' form the two '.o' files. So we now have three targets, not just one:
<blockquote>
<pre>
# This is Makefile.v1 :
# Recall the format
# A blank line seprates the entries for other targets.
# entry for target `main.o`
mymain.o: mymain.c ops.h
    gcc -c mymain.c
<br>
# Notice the blank line above this line indicate the end of the previous targets rules  
# entry for target `ops.o`
ops.o: ops.c ops.h
    gcc -c ops.c
<br>
# entry for target `myprog`
# We list how to build the executable
myprog: ops.o mymain.o
    gcc ops.o mymain.o -o myprog
</pre>
</blockquote>
Also notice how 'myprog' is now the last target. So to build 'myprog' we need to include its name in the command line.
Here is an example of how a session would look now:
<pre>
    $ make myprog
    gcc -c ops.c
    gcc -c mymain.c
    gcc ops.o mymain.o -o myprog
    $ vim ops.c                   Just editing ops.c and adding comments, maybe
    $ make myprog
    gcc -c ops.c
    gcc ops.o mymain.o -o myprog
</pre>
Notice how initially it figured out that to make myprog it needed to create its dependencies 'ops.o' and 'mymain.o'. 
Then it looked up rules to create them, and executed those rules; and then executed the rule for 'myprog'. So make
traces dependecies like this.

## Version 2 of the makefile
We show that you can use some shorthand for a list of files.    
Also we create another target - `clean`. `make clean` will remove some .o and executables.  
<blockquote>
<pre>
# This is Makefile.v2
# DEFINITIONS
# The below two definitions are shorthands
EXECS=myprog
OBJS=mymain.o ops.o
# NOW TARGETS
# The first target is the default,
#      hence 'make' called without a target does this
#      Now I make this target called 'default' which is nothing but same as
#      'myprog'
default: myprog
<br>
mymain.o: mymain.c ops.h
        gcc -c mymain.c
<br>
ops.o: ops.c ops.h
        gcc -c ops.c
<br>
myprog: ops.o mymain.o
        gcc ops.o mymain.o -o myprog
<br>
# Here I have added a new target called clean it simply removes some files
clean:
        rm -f $(OBJS) $(EXECS)
# same as rm -f a.out myprog mymain.o ops.o
</pre>
</blockquote>
## Version 3 of the Makefile
Since **make** knows about C and how to build .o files, we may simply specify as below.  
<blockquote>
<pre>
# Here we explicitly define the special variable CC which will be used for compiling C files.
CC=gcc
EXECS=myprog
OBJS=mymain.o ops.o
# We use the fact that by default gcc is used to create .o file from .c file
#     so the rules for the .o are missing
# This is the first target (hence 'make' called without a target does this)
default: myprog
<br>
mymain.o: mymain.c ops.h
<br>
ops.o: ops.c ops.h
<br>
myprog: ops.o mymain.o
      gcc ops.o mymain.o -o myprog
<br>
clean:
  	  rm -f $(OBJS) $(EXECS)
# same as rm -f mymain.o ops.o myprog
</pre>
</blockquote>
Here is a sample session:
<pre>
    $ make clean
    rm -f mymain.o ops.o myprog 
    $ make
    gcc    -c -o ops.o ops.c
    gcc    -c -o mymain.o mymain.c
    gcc ops.o mymain.o -o myprog
    $
</pre>

Hope this gives you a good idea to get started with make. For more information visit the gnu page on make.