#include <stdio.h>

void main(){
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n; i++) {
		/*
		if (i >= 3 )
			break;     // change to continue to see what happens
		*/
		printf("%d\n",i);
	}
	printf("Outisde : %d\n",i);
}
