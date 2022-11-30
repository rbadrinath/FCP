// computing the primes upto a certain limit
#include <stdio.h>

#define LIMITN 100000		// Look for primes under this limit
// #define LIMITN 30		// Look for primes under this limit

int main()
{
    int n,j;
    // The goal is to print all prime numbers starting with 2
    for(n=2;n<LIMITN;n++) {
	// to test if n is prime by trying to divide n by every integer from 2 to n-1
        for( j=2; j<n;j++){
		if ( (n%j) == 0 )
			break;
	}
	if ( j == n ) // if none of those numbers divided n, then n must be prime
		printf("%d\n",n);
    }
}
