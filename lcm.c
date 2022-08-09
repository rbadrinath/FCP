#include <stdio.h>
#include <stdlib.h>
// To find LCM we can use a common divisor.
// We just find the smallest
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
	// LCM is product if there is no common factor, ie gcd=1
	// The shortcut method using gcd:
	//     find the gcd
	//     LCM is product / gcd
	// In the long method
	//     1. we find a smallest common factor 
	//        let f be the common factor found
	//     2. if f is 1 then 
	//               lcm is the product
	//     3. else // common factor is  > 1 
	//           lcm(n1,n2)=f * lcm (n1',n2') where ni'=ni/f
	// We program the long method here:
	// 
	// 1.
	int f = find_smallest_divisor(n1,n2);
	// 2.
	if ( f==1 ) return n1*n2;
	// 3.
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
