#include <stdio.h>

void swap (int a[], int i, int j){
	int t = a[i];
	a[i]=a[j];
	a[j]=t;
}

// BUBBLE SORT ALGORITHM
void bubblesort(int a[], int left, int right){
	int i,j;
	for (i=right; i>left; i--){ // i is the right most point, so first loop will get the greatest value
		for ( j=left ; j < i ; j++ ) { // we start by bubbling a[left] with a[left+1]
			if (a[j] > a[j+1] )
				swap(a,j,j+1);
		}
	}
}


// INSERTION SORT ALGORITHM
void insert(int a[], int left, int right, int val){
	int i=right;
	while( i >=left && a[i] > val) {
		a[i+1]=a[i];
		i--;
	}
	a[i+1]=val;
}

void insertionsort(int a[], int left, int right){
	int i;
	for (i=left; i <right; i++){
		int v = a[i+1];
		insert(a,left,i,v);
	}
}

// SELECTION SORT ALGORITHM
//
int find_index_min(int a[], int left, int right){
	int index_min=left;
	for(int i=left+1; i<=right; i++)
		if (a[i]< a[index_min])
			index_min=i;
	return index_min;
}

void selectionsort(int a[], int left, int right){
	int i;
	for (i=left; i < right; i++){
		int index_min=find_index_min(a,i,right);
		swap(a,index_min,i);
	}
}

// main() function is pretty much the same whichever sorting method is called
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
	selectionsort(a,0,n-1);

	// print the sorted array
	for (i=0; i < n; i++)
		printf("%d ",a[i]);

}
