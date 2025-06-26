#include <stdio.h>

void main(){
	// Here is some interesting stuff to try out:
	
	// To print a sequence of numbers 1..4
	printf("A sequence of integers:");
	printf("%d",1);
	printf("%d",2);
	printf("%d",3);
	printf("%d",4);
	// The %d says we want to print an integer
	// Note: Anything we put inside a pair of 
	//       double quotes is called a *string*
	//       "%d" is called the *format string* 
	// The 1,2,3, or 4 is the *value* we want to print
	// So the rule with printf is:
	//    printf("format string", value)
	
// The next statement 'return' terminates this function 
	return;   // move it around to see what happens

	// Here is another example of printing:
	printf("%d",123*45-345/3);
	// Here the value to print is got by 
	// doing arithmetic
	

	// The format string can contain normal
	// text also:
	printf("I have %d horses",3);
	// Just the combination of two characters
	// %d  is called a conversion

	// Just like %d is a conversion
	// we can also have special characters
	// Note: Special characters always have
	// a backslash '\' before them
	printf("I have\n %d horses\n",3);
	// as you se above \n is a special one and causes a break in the line.
	// We can us multiple conversions to
	// print multiple values:
	printf("%d %d buckle my shoe!\n",1,2);
	// So the (updated) rule with printf is:
	// printf("format string", value1, value2, ...)
	
	// We can also simply omit a value, like:
	printf("Hello world\n");
	// This is used very often

	// To print 1, 2, 3, 4 separated by spaces
	printf("1 2 3 4\n");
	// Also
	printf("%d %d %d %d\n",1,2,3,4);

	// Another way to print 1, 2, 3 and 4 
	printf("Here is another way:\n");
	for (int i=0; i<=4; i++) 
		printf("%d\n",i);
	// The above method uses a concept - loop

	// Printing  variable values
	printf("Variable usage:\n");
	int a, b;
	a = 1;
	b = 2;
	printf("%d\n",a);
	printf("%d\n",b);
	// OR
	printf("%d\n%d\n",a,b);
	// also we can print the sum :
	printf(" THE SUM IS : ");
	printf("%d\n",a+b);

	// What about the sequence of instructions to compute the sum
}
