// Example of the type of problems we can solve:
// 	4 vadas and 5 dosas cost 370
// 	7 vadas and 2 dosas cost 310
// 	what are the cost of a vada and the cost of a dosa
//
// Idea: We know this can done by using linear equations.
// The model is as two linear equations:
// Modeling: Let v be the cost of a vada and d be the cost of a dosa
// v1 vadas and d1 dosas cost c1..... similarly for the second row:
// v1 * v  +  d1 * d  = c1
// v2 * v  +  d2 * d  = c2
// We input no. vadas v1 (eg four) and no. dosas d1(eg five) and the corresponding cost c1(eg 370)
// similarly nput the second row: v2, d2 and c2
#include <stdio.h>

int main(){
	float v1, d1, c1, v2, d2, c2; // we read in these, BTW, why float?
	scanf("%f %f %f %f %f %f",&v1,&d1,&c1,&v2,&d2,&c2);

	// Now it is about solving for v and d
	// first row multiplied by v2/v1 and subtracting 
	//    it from second row will eliminate the vada cost from second row
	d2-=d1*v2/v1;
	c2-=c1*v2/v1;
	// now we can compute cost of dosa:
	float v,d;
	d=c2/d2;
	// we now use the first equation to compute the cost of the vada:
	v=(c1-d1*d)/v1;

	printf("%f %f\n",v,d);
}


