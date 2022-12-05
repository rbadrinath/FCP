#include <stdio.h>

// This file has multiple tests for the way pointers work.
// Select the test by defining the variable test in main() to be in the appropriate range

void show_value_p(void *p){		// recall that a pointer holds an address value
	printf("Inside function p is %p \n", p);
}

void main(){
	int test=3;

	printf("Will do test # %d\n",test);

	// Unititialized p being used
	// because p=something must happen before his, else p's usafe is not valid
	// Right now p is some junk. So should give us 'Segmentation fault':
	if ( test == 1 ) { 
		int *p;
		*p=1024;		// This step should result in 'Segmentation fault'
		// Lets see the address that p holds
		printf("p holds the address %p\n", p);
		// Lets see what is in the address that p holds
		printf("that above address has this value %d\n",*p);
	}
	
	// Now we are putting 1024 into the variable p which should hold addresses, not numbers.
	// 1024 is not a valid address! So should give us a 'Segmentation fault'
	if ( test == 2 ){
		int *p;
		p = (int *) 1024; 
		// Lets see the address that p holds
		printf("p holds the address %p\n", p);
		// Lets see what is in the address that p holds
		printf("that above address has this value:\n"); 
		printf(" %d\n",*p);	// This step should result in 'Segmentation fault'
	}

	// Now the right way to do things:
	if ( test == 3 ){
		int *p;
		int i;
		p = &i;		// This ensures the address in p is a valid integer location
				// Note that i is un-initialized, which may be a problem if we use it's value
		// Lets see the address that p holds
		printf("p holds the address %p\n", p);
		// Lets see what is in the address that p holds
		show_value_p(&i);	// The "&" operator actually results in an address value
		printf("that above address has this value:\n"); 
		printf(" *p is  %d\n",*p);
		printf(" i  is  %d\n",i);

	}

	// This is to demonstrate address arithmetic
	if ( test == 4 ){
		int *p;
		p = (int * ) 1024;  // careful! p itself is invalid :-)
		printf("p holds the address %p\n", p);
		printf("sizeof(int) is %ld\n", sizeof(int));
		p ++;	// Note that p++ is pointer arithmetic:
	       		//	it increases p to point to the integer location after the current integer address p.
		printf("p holds the address %p\n", p);
		char *pc;
		pc = (int *) 1024;
		printf("p holds the address %p\n", pc);
		printf("sizeof(char) is %ld\n", sizeof(char));
		pc ++;	// Note that p++ is pointer arithmetic:
	       		//	it increases p to point to the character location after the current character address p.
		printf("p holds the address %p\n", pc);


	} // what if we did p = p+2;



}
