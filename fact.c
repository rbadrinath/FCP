#include <stdio.h>

// An introductory idea of recursion. This is a well known function
// Mathematically:
//  factorial(n) :: 1                    if n equals  0
//               :: n * factorial(n-1)   if n > 0 
//  We dont define it for negative numbers
int fact(int n){
	if (n == 0 )
		// we call this the base case or *non*-recursive case
		return 1;
	else
		// we call this the recursive case
		return n*fact(n-1);
	// Draw a call tree to see what it looks like, then 
	// draw a call stack. Also look at what gdb says
}
int test(int n){
	// This is a simple function just to illustrate what 
	// the frame looks like for a normal function call
	int x=10;
	int n = x * n; 
	return n;
}
int main(){
	int n=0;
	int z=3;
	int v;
	scanf("%d",&n);

	v = test(n);  // replace with fact(n)
	printf(" main got %d\n",v);
}
