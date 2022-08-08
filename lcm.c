#include <stdio.h>
#include <stdlib.h>
int find_smallest_divisor(int a , int b){
	for (int i=2;i<= b; i++) {
		if ( a%i == 0 && b %i == 0 )
			return i;
	}
	return 1 ;
}
int lcm (int n1, int n2 ) {
	// make sure the numbers are positive
	// And that neither is zero
	// lcm is product if there is no common factor, ie gcd=1
	// Else find the gcd
	// lcm is product / gcd
	// In the long method
	//   we find a common factor by simply looping through primes 
	// let f be a factor
	// if f is 1 then lcm is the product
	// else lcm(n1,n2)=f * lcm (n1',n2') where if f|ni then ni'=f/ni else ni'=ni
	int f = find_smallest_divisor(n1,n2);
	if ( f==1 ) return n1*n2;
	else {
		n1=n1/f ; n2 = n2/f ;
		return f * lcm(n1,n2);
	}

}

int main(){
	int n1,n2;
	while(1) {
		printf("Give me two numbers");
		scanf("%d %d", &n1, &n2);
		printf("lcm is %d\n",lcm(n1,n2));
	}
}
