#include <stdio.h>
#include <limits.h>
void main(){
	int j,k;
	// printf("%f %f",(float) (1/5), 1/5.0);
	int i=1;
	j=0;
	while( i > 0) {
		i<<=1;
		j++;
		printf("%2d %d \n",j,i);
	}
	printf("Here sizeof(int) is  %d\n",(int) sizeof(int));
	printf("INT_MAX is(hex) %x\n",INT_MAX);
	printf("INT_MAX is(dec) %d\n",INT_MAX);
}
