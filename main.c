#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 This is a comment
 over one or more lines
 and ends next line
 */

// This is also a comment
// Comments have no significance to the behaviour of the program
//
void blah(){			// this is a function definition expression
	7+4;
	sin(5.2);		// This is a function call expression
}
void testf(){
}

int main(){
	// Statements from simple expressions.
	7+4;		// arithmetic expression
	7 ; 		// A value is an expression
	0x7f;			
	072 + 4 + 0x7f ;
	{		// This is a block
		3.41 +6.023e23 ;
	}
	5 < 3;		// A comparision (relational) expression
	// Variable definitions
	int i,j,k;
	// Assignment is an expression
	i = 7 + 4;   // Obvious
	j = (i = 3); // i = 3   gives a value of 3!
			// Note assignment is different from stating equality!
	// Arithmetic Expression statements
	k = 5 - 3 + 2 ; // associativity is what makes it evaluate the way
			// we think! (5-3)+2
	k = 5 - 3 * 2 ; // precendence is what makes it evaluate the way
			// we think! 5 - (3*2)
	k = 5 % 2 ;	// This is the "mod" or remainder operator
	// Relational expressions
	i >= j ;
	i > j ;
	i > j > k ; 	// This is a statement, but not what you think!
		// Relational expressions are used to check conditions
	if ( i>j) 
		if (j > k )
		   printf("i j and k are in decreasing order\n");
			// This is the right way to do the check!
	// Logical expressions
	if ( (i > j ) && ( j > k ))
		printf("i j and k are in decreasing order\n");

	// Function call expressions 
	// all calls to printf() above
	i = random();	//random is a library function being used to get a value
	testf();	// This is a function-call expression
}
