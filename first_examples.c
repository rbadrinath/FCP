#include <stdio.h>

void print_triangle1(){
	printf("* * * * *");
	printf("  * * *  ");
	printf("    *    ");
}

void print_triangle2(){
	printf("*****");
	printf("****");
	printf("***");
	printf("**");
	printf("*");
}



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

void add_3_nums(){
	// declare the variables for the numbers and the sum
	int n1;
	int n2;
	int n3;
	int sum;

	// the variables must have values before you can use them
	// How do variables get values ?
	// option 1 set variable values
	// option 2 read from the user

	// add n1, n2 and n3 and store the result in 'sum'
	sum=n1+n2+n3;

	// How do we view the result?
	
	// What about printing average?
}

void prompt_and_read(){
	int n1=0;
	printf("Before:- n = %d\n");
	scanf("&d", &n);
	printf(" After:- n = %d\n");
}



void swap_2_vars(){
	// we are swapping the contents of two variables
	// declare the int variables to interchange
	int a,b;
	// We need another variable
	int x;

	// the variables must have values before you can use them
	// How do variables get values ?
	
	// Here is a way to interchange them
	x= a;
	a =b;
	b=x;

	// How do we view the result?

}

void cycle_3_vars(){
	// we are swapping the contents of two variables
	// declare the int variables to interchange
	int a,b,c;
	// We need another variable
	int x;

	// the variables must have values before you can use them
	// How do variables get values ?
	
	// Here is a way to interchange them
	x= a;
	a =b;
	b=  c;
	c=x;

	// How do we view the result?

}

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

void find_factorial(){
	// compute factorial of 6
	int f=1*2*3*4*5*6;
	printf("Factorial of  6   is   %d\n",f);
}

// We need a main() to run it.
// So write a main()
