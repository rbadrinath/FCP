#include <stdio.h>
int main(){
	int a1= 22;
	int a2= 8;
	int a3= 4;

	printf("Sum is  %d \n",a1+a2+a3);           //expect 34
	printf("Average is %f \n", (a1+a2+a3)/3.0); //expect 11.333333....
	printf("The sum of the first two modulo the third is %d \n",
			(a1+a2) % a3);		    //expect 2
	/*
	printf("median is %d", .... );
	printf("standard deviation is  %f \n", ..... );
	*/

}
