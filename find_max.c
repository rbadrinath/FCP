#include <stdio.h>

int main(){
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
