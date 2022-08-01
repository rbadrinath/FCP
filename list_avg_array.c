#include <stdio.h>

int main(){
	int i;
	int sum=0;
	int n;
	int arr[100];
	printf("Howmany numbers to sum? ");
	scanf("%d",&n);
	printf("Enter %d numbers to sum ",n );
	for (i=0; i < n ; i ++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("Sum is %d\n",sum);
}
