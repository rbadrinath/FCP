#include <stdio.h>

/*
 *  This file has several simple examples of functions
 */

// Function prototypes
void print_triangle();
void print_triangle2();
void read_and_print();
void increment_variable_values();
void add_3_nums();
void prompt_and_read();
void swap_2_vars();
void cycle_3_vars();
void show_common_sizes();
void find_factorial();


// Print a triangle
void print_triangle1(){
	printf("* * * * *");
	printf("  * * *  ");
	printf("    *    ");
}

// Print a different kind of triangle
void print_triangle2(){
	printf("*****");
	printf("****");
	printf("***");
	printf("**");
	printf("*");
}

/*
// read a variable and print it
void read_and_print(){
	printf(">>");
	scanf("%d",&n);
	printf("<< %d \n",n);
}
*/

// Another read a variable and print example
void prompt_and_read(){
	int n1=0;
	printf("Before  scanf %d\n",n1);
	printf("Give a new value:",n1);
	scanf("%d", &n1);
	printf(" After  scanf %d\n",n1);
}

// increment some variable values and print
void increment_variable_values(){
	int x;
	int y;
	int z;

 	// How do the variables get their values?	
	printf("Before:- x is %d,   y is  %d,   z is %d\n",x,y,z);
	x = x+1;
	y = y+1;
	z = z+1;
	printf("After:-  x is %d,   y is  %d,   z is %d\n",x,y,z);
}

// adding three integers
void add_3_nums(){
	// declare the variables for the numbers and the sum
	int n1;
	int n2;
	int n3;
	int sum;

	// the variables must have values before you can use them
	// How do variables get values ?
	// option 1 set variable values like n1=45; etc
	// option 2 read from the user using scanf like scandf("%d",&n1); etc

	// add n1, n2 and n3 and store the result in 'sum'
	sum=n1+n2+n3;

	// How do we view the result?
	
	// What about printing average?
}


// There are two variables with values. Interchage the values they store
void swap_2_vars(){
	// we are swapping the contents of two variables
	// declare the int variables to interchange
	int a,b;
	// We need another variable
	int x;

	// the variables must have values before you can use them
	// How do variables get values ?
	// see add_3_nums
	
	// Here is a way to interchange them
	x= a;
	a =b;
	b=x;

	// How do we view the result?

}

// Cyclically shift values in three variables. 
void cycle_3_vars(){
	// declare the int variables
	int a,b,c;
	// We need another variable
	int x;

	// the variables must have values before you can use them
	// How do variables get values ?
	// see add_3_nums
	
	
	// Here is a way to interchange them
	x= a;
	a =b;
	b=  c;
	c=x;

	// How do we view the result?

}

// We would like to see sizs of different "types" 
void show_common_sizes(){
        printf("\n For commonly used types :\n");
	char vc;
	int vi;
	float vf;
        printf("sizeof(char) is     %ld\n",sizeof(vc));
        printf("sizeof(int) is      %ld\n",sizeof(vi));
        printf("sizeof(float) is    %ld\n",sizeof(vf));


        printf("\n\n Additionally :\n");

        printf("sizeof(short int) is          %ld\n",sizeof(short int));
        printf("sizeof(long int) is           %ld\n",sizeof(long int));

        printf("sizeof(double) is   %ld\n",sizeof(double));
}


// A simple way to compute the factorial of a number
void find_factorial(){
	// compute factorial of 6
	int r=1*2*3*4*5*6;
	printf("Factorial of  6   is   %d\n",r);
}

// We need a main() to run it. Compile and see what happens
// So write a main()
//
void main(){
// uncomment one of these at a time:
	// print_triangle();
	// print_triangle2();
	// prompt_and_read();
	// increment_variable_values();
	// add_3_nums();
	// prompt_and_read();
	// swap_2_vars();
	// cycle_3_vars();
	// show_common_sizes();
	// find_factorial();
}





//
// Other concepts to recall
// Variables get values in one of 3 ways in C
// 1. From an *assignment expression*, involving
// 		arithmetic/logic/comparator/constant expressions (eg 4+3)
// 		function return values (eg sin(x))
// 		or a combination of the above (1+4*sin(x))
// 	This can also be used at variable definition time.
// 2. By passing value to *parameter* in a function
// 3. By scanf (or any such modifying function) 
//    via an *address parameter* (side effect)
//       This method probably relies on an assignment too, inside the callee.

