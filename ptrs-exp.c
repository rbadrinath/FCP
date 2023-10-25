#include <stdio.h>
#include <stdlib.h>

// A few early explorations around pointers and arrays

// Exploration - 1
// note that int * a  and int a [ ]
// are interchangable
void foo(int   a[ ]){
		
	int i = 0;
	while (i < 5) {
		printf("%d\n", a[i] );
		i++;
	}

}
/*
// Exploration - 
// Returning adress values (pointers) is ok,
// However, you cant return a local variable's address
char * bloo(){
	char a[10]="hello";
	return a ;
}
*/

void main(){
	int x=10,y=100;
	int  *p, *q, *r;  // Note: Declaring multiple points together

	p = &x;
	q = &y;

/*
	// Exploration - 2
	// print a bunch of pointers (addresses)
	printf("%p %p %p %p\n", p, q, &x, &y);
	// We can also print addresses of p and q variables
	printf("%p %p\n",&p, &q);
	printf("%p %p\n", p, q, &x, &y, &p, &q); // did you mean: printf("%p %p %p %p %p %p\n", p, q, &x, &y, &p, &q);
	// printing contents pointed to by pointers
	printf("%d %d %d %d\n", *p, *q, x, y);
	// printing contents pointed to by uninitialized pointer - dangerous: Runtime error
	printf("%d\n",*r);
	// What is the size of a pointer vs integer on my system?
	printf("%d %d\n", sizeof(int), sizeof(int *));
*/

/*
	// Exploration - 3
	// We can now understand scanf a bit better
	int z=0;
	printf("%p\n",&z);
	// Here if we call the function with z instead of &z what goes wrong?
	scanf("%d", z);
	printf("The value of z is %d\n",z); // should never come to this line
*/
	
/*
	// Exploration - 4
	//  the zero-th index item, ie a[0]
	int a[10]={1,2,3,4,5};
	a = 0;  // bound to fail:  Error - you cant assign to an array!
	//         also array name is like a constant address
	a[0]= 0; // This is assigning to an array element
	//
	// What is the value of a vs &a[0] ?
	printf("\n\n%p\n",a);
	printf("\n\n%p\n",&a[0]);
	// Lesson - An array name is a constant value wiz., the location of the
	//           beginning of the array
*/
/*
	// Exploration - 5 using array name as an address
	// Since an array name is an address, 
	// an integer pointer (int *p) can be assigned the value a
	p = a;  // inititlizes p to the address a
	printf("%p %p\n",p,a);
	// A function parameter of type (int *) can also receive the value a
	foo(a);
*/
	
/*
	// Exploration - 6
	int m;
	p = &m;
	printf("%p %p %p\n",p,p+1,p+2);
	printf("%d %d %d\n",*p,*(p+1),*(p+2));
	printf("%p %p %p\n",p[0],p[1],p[2]);
*/
}
