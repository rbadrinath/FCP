#include <stdio.h>
void main(){
// scanf's *syntax*
    // scanf(FORMAT-STRING,   arg1, arg2, arg3, ...);
    // FORMAT-STRING is a string containing conversion specifiers
    //   	%d, %f, %c, %s are examples of conversion specifiers
    //   	%d - for integers
    //   	%f - for floating point numbers
    //   	%c - for characters
    //   	%s - for strings
    //   	There are more, but the above are most common
    //    Almost always conversion speifiers are separated by one space
    //    eg. in the format string: "%d %d %f" we have three
    //    conversion specifiers, indicating we expect two integers followed
    //    by a float.
    // arg1, arg2, arg3, etc are *addresses* of variables to which
    //    the read input will be stored. Since it is an address
    //    it usually is a variable name preceded by an "&" sign
    // RULE: 
    //    (1) The conversion specifiers must match the list of variables
    //    in both number and type
    //    (2) The space is treated in a special way it matches a sequence
    //        of newlines, blanks and tabs (also together called whitespaces)
	int n,m;
	float d;
	char ch;
    // reading integer integers and floats
    	printf("Input an integer n :");
	scanf("%d",&n);
        // reading two ints and a float not the order and type of &n, &m, &d
    	printf("Input two integers and a real n,m and d :");
	scanf("%d %d %f", &n, &m, &d); 
	// common errors include writing the format string with commas
    // A paritcularly confusing thing may be reading a character:
	// To read characters, DO NOT normally use the following
	// scanf("%c",&ch); // Quite often it reads a space or a newline
			 // unintentionally 
	// Instead the following is OK to read a non-whitespace character
    	printf("Input a character  >");
	scanf(" %c", &ch); // this reads the next non-newline, non-whitespace character into the variable. The extra space makes sure to neglect whitespaces.

// printf's *syntax*
   // printf(FORMAT_STRING, arg1, arg2, arg3, ....)
   // FORMAT_STRING is exactly as in the scanf with exactly the same type
   //    of conversion specifiers
   // arg1, arg2, arg3, ... are a list of *values* to be printed
   // RULE: The conversion specifiers must match the list of variables
   //    in both number and type 

	printf("%d", n);
	printf("%d%d", n, m); // This doesnt appear good. So uses spaces
	// in between, for example:
	printf("%f %d %d", d, n, m); // This is good, but we often want to
	// go to the next line after we print something so use a '\n' character
	// in the end of the format string, like
	printf("%f %d %d\n", d, n, m); // This is good usually the right thing
	// Note that whatever else we put in the format string is also printed
	printf("d=%fn=%dm=%d\n", d, n, m); // may print something like
	// d=6.200000n=100m=200, but definitely the following is much better:
	printf("d=%f   n=%d    m=%d\n", d, n, m);
	
	// Normally we put as many spaces as we want.
	// Additionally we can use a width specifier for printf conversions:
	printf("d=%8.2f n=%4d    m=%8d\n", d, n, m);
// See also Section B.12 and B.13 in the appendix K&R text book 2nd Edition
// for a lot more information than we can teach in a course.
// See also 'man 3 printf'  and  'man 3 scanf'  commands on your ubuntu terminal
// See also the man page for getchar and putchar to know some other common ways to input and output

}
