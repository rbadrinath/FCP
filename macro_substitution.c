#include <stdio.h>
#include <stdlib.h>


// before doing the compiling to create a.out
// try compiling with the -E option to see what the preprocessor does


// MACRO simply substitute the left item by the right item, literally.
// MACROs come in two varieties - wihout a parameter and with parameters:
// 1st kind:
// NUM below is not a variable
//           is not a constant variable (unline const)
//           It is just a constant!
#define NUM 10
// SIMILARLY THIS
#define INC  ++
// AND THIS
#define BYE printf("bye bye\n")

// 2nd kind:
// MAX below is not a function!!
// 	     It is just a macro
#define MAX(X,Y)   X > Y ? X : Y


// Here is an unusual trick that helps when writing some macros
// The hash sign in front of a variable converts it to a string when used in the macro body
#define check(expr) (expr)? 1 : (printf("Error with %s, aborting!\n",#expr),exit(1))

void main(){
	int z = NUM;
	z++;
	printf("%d\n",z);

	int * p; // can I assing p to point to NUM? 
		 //    ....NO! because it is just a constant
	
	// This is a common use:
	char a[NUM] = "Hello";
	int i=10,j=20;
	i INC ;
	BYE;

	printf("MAX(i,j) is %d\n",MAX(i,j));

	printf("Give me an integer, +ve is all good, but otherwise it will abort :");
        scanf("%d",&i);
        check(i>0);
        printf("All good\n");
}
