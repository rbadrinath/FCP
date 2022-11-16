#include <stdio.h>

// Here we read three numbers and find their maximim
int read_and_find_max(){
	int a, b, c;
	printf("Give me three numbers: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	printf("Max is : ");
	if ( a > b ) {
		if (a > c )
			printf("%d",a);
		else
			printf("%d",c);
	} else {
		if (b > c )
			printf("%d",b);
		else
			printf("%d",c);
	}
	printf("\n");
}

// Here is a function to find the max of 2 numbers
// run it to see what happens
void find_max_of_2(int a, int b){
	if ( a > b ) 
		printf("Maximum is %d\n",a);
	if ( b > a ) {
		printf("a is %d, b is %d\n",a,b);
		printf("Maximum is %d\n",b);
	}
}


// Here is a function for the maximum of 3 numbers
// Run it see what happens
void find_max_of_3(int a, int b, int c){
	if ( a > b && a > c) 
		printf("Maximum is %d\n",a);
	if ( b >a && b > c) 
		printf("Maximum is %d\n",b);
	if ( c >a && c > b) 
		printf("Maximum is %d\n",c);
}

void main(){
}
