#include <stdio.h>
#include <stdlib.h>
// A Method to compute the GCD of two given numbers
//
// This is through this function called gcd()
// It takes two parameters
//      n1, n2 which are the two numbers
// It returns a value which is the gcd of the two numbers
int gcd(int n1, int n2){
	// Lets assume n1 >= n2 > 0
	// gcd of 1 and another number is 1
	// if the smaller divides the larger then the smaller is the gcd
	// Else the gcd of two number is the gcd of the difference and the smaller of the two numbers
	// ie gcd of n1 and n2  is same as gcd n2 and n1%n2
	if ( n1 < n2 || n2 <= 0 ) {
		printf(" The given values are not as assumed; "
				"error! Just cant compute exiting\n");
		exit(1);
	}
	if (n2 == 1)
		return 1;
	if (n1%n2 == 0 )
		return n2;
	else {
		int n3=n1%n2;
		return gcd(n2,n3);
	}
}

int main(){
	int n1,n2;
	
	do {
		printf("Give me two numbers: ");
		scanf("%d %d",&n1,&n2);
		printf("GDC is %d\n",gcd(n1,n2));
	} while (n1 > 0 && n2 > 0 );
}
