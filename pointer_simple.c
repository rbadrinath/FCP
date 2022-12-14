#include <stdio.h>
#define TEST_NO 1

// This file has multiple tests for the way pointers work.
// Select the test by defining the variable test in main() to be in the appropriate range

void show_value_p(void *p){		// recall that a pointer holds an address value
	printf("Inside function p is %p \n", p);
}

void swap_ints(int x, int y){
	int t;
	t = x;
	x = y;
	y = t;
}


void swap_ints_by_ptr( int * x, int * y){
	int t;
	t = *x;
	*x = *y;
	*y = t;
}


void main(){
	int test= TEST_NO ;

	printf(" - - - - - - - - Will do test # %d\n",test);

	switch(test){
	     case 1: { 
		// p is unititialized
		int *p;
		// Lets see the address that p holds - should be junk
		printf("p holds the address %p\n", p);
		// The location p is looking at change that int's value to 1024
		//   normally p=something must happen before his, 
		*p=1024; // This step should result in 'Segmentation fault'
		// Lets see what is in the address that p holds - should get here
		printf("that above address has this value %d\n",*p);
	      }
	
	     case 2: {
		// p has an invalid address - sort of like unitialized
		int *p;
		p = (int *) 1024; // Try putting 1024 into p .. not a valid address
		// Lets see the address that p holds
		printf("p holds the address %p\n", p);
		// Lets see what is in the address that p holds
		printf("that above address has this value:\n"); 
		printf(" %d\n",*p); // This step should cause in 'Segmentation fault'
	      }

	      case 3: {
		// Now the right way to do things:
		int *p;
		int i;
		p = &i;  // This ensures the address in p is a valid integer location
			 // Note that i is un-initialized, 
			 // which may be a problem if we use it's value
		// Lets see the address that p holds
		printf("p holds the address %p\n", p);
		// Lets see what is in the address that p holds
		show_value_p(&i);  // The "&" operator results in an address value
		printf("that above address has this value:\n"); 
		printf(" *p is  %d\n",*p);
		printf(" i  is  %d\n",i);
		break;
	    }

	 case 4: {
		// This is to demonstrate address arithmetic
		int *p;
		p = (int * ) 1024;  // careful! *p is invalid :-)
		printf("p holds the address %p\n", p); // note "%p" format conversion
		printf("sizeof(int) is %ld\n", sizeof(int));
		p ++;	// Note that p++ is pointer arithmetic operation:
	       		//	it increases p to point to the integer location 
			//	after the current integer address p.
		printf("p incremented holds the address %p\n\n", p);
		char *pc;
		pc = (char *) 1024;
		printf("pc holds the address %p\n", pc);
		printf("sizeof(char) is %ld\n", sizeof(char));
		pc ++;	// Note that p++ is pointer arithmetic:
	       		//	it increases p to point to the character location after the current character address p.
		printf("pc incremented holds the address %p\n", pc);

		break; // what if we did p = p+2;
	    }
	 default:
	 case 0: {
		int i = 100,   j = 200 ;
		if ( test ) 
			swap_ints(i,j);
		else
			swap_ints_by_ptr(&i,&j);
		printf("i = %d    j = %d\n",i,j);
	    }

	} // end of the switch


}
