#include <stdio.h>
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
	7+4;			// arithmetic expression
	0x7f;
	072 + 4 + 0x7f ;
	5 < 3;			// Logical expression
	{			// This is a block
		3.41 +6.023e23 ;
	}
	testf();		// This is a function-call expression
}
