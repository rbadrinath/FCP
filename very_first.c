#include <stdio.h>
void main(){

	// To print 1, 2, 3, 4 on separete lines
	printf("Here is the first way:\n");
	printf("1\n");
	printf("2\n");
	printf("3\n");
	printf("4\n");

	// To print 1, 2, 3, 4 on separete lines  - Another way
	printf("Here is another way:\n");
	int i = 0;
	while (i<=4) {
		printf("%d\n",i);
		i = i + 1;
	}

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
