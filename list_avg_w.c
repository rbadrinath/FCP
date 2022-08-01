#include <stdio.h>

int main(){
	int i;
	int sum=0;
	int n;
	int x;
	printf("Howmany numbers to sum? ");
	scanf("%d",&n);
	printf("Enter %d numbers to sum ",n );
	i=0;
	while (i < n ){
		scanf("%d",&x);
		sum+=x;
		
		i=i+1;
	}
	printf("Sum is %d\n",sum);
}
