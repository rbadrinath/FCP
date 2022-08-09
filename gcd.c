#include <stdio.h>
#include <stdlib.h>
// A Method to compute the GCD of two given numbers
//
// This is written this C function called gcd()
// It takes two parameters
//      n1, n2 which are the two numbers
// It returns a value which is the gcd of the two numbers
int gcd(int n1, int n2){
	// How it works:
	// 1. Lets assume n1 >= n2 > 0
	// 2. GCD of 1 and another number is 1
	// 3. If n2 | n1 then n2 is the GCD
	// 4. Else the GCD of two numbers is the same as  
	//                          the gcd of n2 and the remainder of n1/n2 
	//         i.e. GCD of n1 and n2  is same as gcd n2 and n1%n2
	//
	// ----- Now the same in the C Language -----
	// 1.
	if ( n1 < n2 || n2 <= 0 ) {
		printf(" The given values are not as assumed; "
				"error! Just cant compute exiting\n");
		exit(1);
	}
	// 2.
	if (n2 == 1)
		return 1;
	// 3.
	if (n1%n2 == 0 )
		return n2;
	// 4.
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
