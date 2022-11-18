#include <stdio.h>

void average_list(){
	int i;
	int sum=0;
	int n;
	int x;

	printf("  Howmany numbers to sum? ");
	scanf("%d",&n);

	printf("  Enter %d numbers to sum ",n );

	i=0;   // count howmany integers already read
	while (i < n ){
		scanf("%d",&x);
		i=i+1;		// increment number of integers read

		sum+=x;		// add read integer to sum
	}
	printf("  Sum is %d\n",sum);
}

void factorial(){
	int n;
	printf("  n =  ");
	scanf("%d",&n);

	int i=1;
	int prod=1;
	while (i <= n ) {
		prod=prod*n;
	}

	printf("  Factorial is %d\n",prod);
}

void main(){
	factorial();
	// average_list();
}
