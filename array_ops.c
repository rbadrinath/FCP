#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STRING_SIZE 100

// read an array of integers from standard input
int read_iarray(int a[]){
	// Prompt and read in the numbers one by one
	int n;
	printf("Howmany numbers? ");
	scanf("%d",&n);
	printf("Give the %d numbers : ",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	return n;
}

// read an array of integers from a file.
// First read the number of integers and then the integers one by one.
int read_iarray_file(int a[], const char * filename){
	FILE * fp;
	fp = fopen(filename,"r");
	int n;
	fscanf(fp,"%d",&n);
	for(int i=0;i<n;i++)
		fscanf(fp,"%d",&a[i]);
	return n;
}

// A function to print out the items of an array of n integers
void print_iarray(int a[], int n){
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

// read an array of strings from standard input
// assumes a[] is an empty array of pointers to strings
int read_sarray(char * a[]){
        // Prompt and read in the strings one by one
        int n;
        printf("Howmany strings? ");
        scanf("%d",&n);
        printf("Give the %d strings : ",n);
        for(int i=0;i<n;i++) {
		char s[MAX_STRING_SIZE];
                scanf("%s",s);
		a[i]=(char *) malloc((strlen(s)+1)*sizeof(char));
		strcpy(a[i],s);
	}
        return n;
}


// read strings into an array from a file
// First read the number of strings and then the strings one by one.
int read_sarray_file(char * a[], const char * filename){
	FILE * fp;
	fp = fopen(filename,"r");
	int n;
	fscanf(fp,"%d",&n);
        for(int i=0;i<n;i++) {
		char s[MAX_STRING_SIZE];
                scanf("%s",s);
		a[i]=(char *) malloc((strlen(s)+1)*sizeof(char));
		strcpy(a[i],s);
	}
        return n;
}



// A function to print out the items of an array of n strings
void print_sarray(char * a[], int n){
	for(int i=0;i<n;i++)
		printf("%s ",a[i]);
	printf("\n");
}

