#include <stdio.h>

void make_pivot_the_first(int a[], const int left, const int right){
	// lets assume the first element (leftmost) is the pivot. So no work.
	return ;
}

// In-place pivotting of the array, that means we do not use additional array space
int pivot_the_array(int a[], const int left, const int right){
	int l,r,i;
	make_pivot_the_first(a,left,right);
	int pv=a[left];
	l=left, r=right; 
	while(  l <= r )  {
		// We loop as long as there is something in the range l .. r (ie l <= r ) 
	   while ((l <= r) && (a[l]<=pv) ) // stop when you find an item in a greater then pv
		   l++;
	   while ((l <= r ) && (a[r] > pv)) // stop when you find an item in a less than or equal to pv
		   r--;
	   if ( l > r )     // break for sure condition
		   break;
	   else {	    // swap a[l] and a[r]
		   int t = a[l];
		   a[l]=a[r];
		   a[r]=t;
	   }
	}
	int pivot_pos=l-1;  // This is the position where pv will sit, it is now at a[left]
	int t = a[left];    // 
	a[left]=a[pivot_pos];
	a[pivot_pos]=t;

	return pivot_pos ;

}

void quicksort(int * a, const int left, const int right){
	// if right-left < 1 then nothing to sort
	if ( right-left < 1 )
		return ;
	int p=pivot_the_array(a,left,right);
	quicksort(a, left, p-1);
	quicksort(a, p+1, right);
}

int main(){
	// i is an iteration variable
	// n is number of items to read in to sort
	int i,n;
	// a is the array to store the numbers read in
	int a[100];

	// Prompt and read in the numbers one by one
	printf("n=?");
	scanf("%d",&n);
	for (i=0; i < n; i++)
		scanf("%d",&a[i]);
	printf("\n");

	// Sort the numbers in the array positions 0..n-1
	quicksort(a,0,n-1);

	// print the sorted array
	for (i=0; i < n; i++)
		printf("%d ",a[i]);

}
