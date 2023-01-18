#include <stdio.h>

// Look at these functions one by one
//
// 1. Simple swap of any two indices
void swap(int a[], int i, int j){
	int t = a[i];
	a[i]=a[j];
	a[j]=t;
}

// 2. Modified swap of successive indices, but do it only if a[i] > a[i+1]
void swap_greaterup(int a[], int i){
	if (a[i] > a[i+1] )
		swap(a,i,i+1);
}

// 3. Repeatedly do the  modified swapfor each valid value of i
void repeat_swap_greaterup(int a[], int n){
	for(int i=0;i<n-1;i++)
		swap_greaterup(a,i);
}

// 4. This just prints the whole array
void print_array(int a[], int n) {
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

void main(){
	int a[]={5,3,2,8,6,9,1,0};
	int n = sizeof(a)/sizeof(int);
	printf("%d\n",n);
	print_array(a,n); // print the input
	repeat_swap_greaterup(a,n); // do the repeated swap
	print_array(a,n); // print the result modified array
}
