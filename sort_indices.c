#include <stdio.h>
// We illustrate repurposing bubble sort
// This time not to sort the original array, but to sort an index array

void readarray(int a[], int n){
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}

void printarray(int a[], int n){
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

void printidxarray(int a[], int idx[], int n){
	for(int i=0;i<n;i++)
		printf("%d ",a[idx[i]]);
	printf("\n");
}

// sorting an array of integers
// First we need a greater than function using index array
// instead of a[i] > a[j] we check a[idx[i]] > a[idx[j]]
// It returns 1 if and only if the above is true else it returns 0
int greater(int *a, int *idx, int i, int j){
	if(a[idx[i]] > a[idx[j]])
		return 1;
	return 0;
}
// We also need a way to swap two items in an array 
// (this time it is used to swap items in the index array)
void swap(int *a, int i, int j){
	int t;
	t = a[i];
	a[i]=a[j];
	a[j]=t;
}

// now the core bubble sort:
void sort(int *a, int*idx, int n){
	for(int hp=n-1;hp>0;hp--)
		for(int i=0;i<hp;i++)
			if(greater(a,idx,i,i+1))   // some change here
				swap(idx,i,i+1);   // some change here
}

void main(){
	int a[10];		// This holds the data
	int idx[10];		// This holds the indices
	int n=6;		// fixing n for this experiment to 6

	printf("Give me a list of %d integers to sort: ",n);
	readarray(a,n);		// We now read in the data
	for(int i=0;i<n;i++)	// The indexes are 0..n-1 and stored in idx
		idx[i]=i;
	printf("You gave : ");
	printidxarray(a,idx,n);


	printf("Now sorting...\n");
	sort(a,idx,n);

	printf("Sorted items...:\n");
	printidxarray(a,idx,6);
	printf("Original list...:\n");
	printarray(a,n);
}
