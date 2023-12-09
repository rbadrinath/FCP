#include <stdio.h>
#include <stdlib.h>


void main(){
	
	// Short circuit evaluation
	// Example 1
	printf("I will keep printing 10..1 until I get an 'x'\n");
	int a=0;
	while( a ||  (a = 10)){   // a=10  only happens if a == 0 
		printf("%d",a--);
		int opt = getchar();
		if ( opt == 'x')	// some decent loop termination
			break;
	}

	// Example 2
	printf("Give me an integer and I will print one of 10..40 for 1..4\n");
	printf("... until you give me something outside this range\n>");
	int b[5]={0,10,20,30,40};
	int i;
	while(1){
		scanf("%d",&i);
		if ( b[i]==0 ||  i>4 || i< 0 ) // This order is bad, why?
			break;
		printf("%d\n>",b[i]);
	}

	// Example 3
	// the idea is that start at position i
	// and as long as p is not NULL and the item pointed to
	// by p is non-zero keep repeating the loop
	
	printf("read an index and if it is positive print b[i],b[i+1]...\n");
	printf("until your hit a zero...\n");
	printf("  The pointer us NULL if it is not a valid location.so exit..\n");
	int *p = NULL;
	scanf("%d", &i);
	if ( i < 0 || i >4 )
		p=NULL;
	else
		p=&b[i];
	while ( *p != 0 &&  p !=NULL  ) {  // This order is bad, why?
		i++;
		if ( i > 4 ) 
			p=NULL;
		else
			p=&b[i];

	}
}
