#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 20

#define main1 main

// function prototypes
int find_length(char s[]);
void exchange_strings(char s[], char t[]);
int compare_and_exchange(char s[], char t[]);
int find_position(char sorted_arr[][20], int arrsize, char newstr[]);

// demostrate a string as an array
int find_length(char s[]){
	int i;
	// Wonder what is the sizeof(s) here? Hmmm...
	for(i=0;s[i]!='\0';i++);
	return i;
}

//
// A function to exchange (swap) two character strings
void exchange_strings(char s[], char t[]){
  // This is very similar to swapping of the contents of two variables
  // Note that s and t are pointers...
  // Note also that it is making a dangerous assumption
  //      that there is enough space t do the exchange properly
  char d[MAX]; // temporary variable used for swapping.
  strcpy(d,s);
  strcpy(s,t);
  strcpy(t,d);
}


// A function to exchange two character strings so that s 
// is equal to smaller than t
int compare_and_exchange(char s[], char t[]){
  if (strcmp(s,t) > 0 )
	  exchange_strings(s,t);
}


// A function to receive as a parameter a 
// sorted array of strings in increasing order or their dictionary order
// Another parameter is a new string.
// The Aim is to find the position(index) of the new string in the
// array.
int find_position(char sorted_arr[][20], int arrsize, char newstr[]){
   int i;
   for (i=0; i<arrsize ; i++)
	   if ( strcmp(sorted_arr[i],newstr) >= 0 ) // found the position
		   break;
   return i;  // note that i is arrsize if newstr is bigger 
              // than all items in the array
}

void main1(){
   // Elaborate example shows how a 2 dimensional array is used
   // as strings
   char s[100][20]; // s is an array of strings, each of max size 20
   char newstr[20];
   int i, pos, size;
   FILE * fp;
   fp = fopen("stringsfile","r");
   if ( fp == NULL ) {
      printf("Error opening file, exiting!\n");
      exit(1);
   }
   // Blow is a little loop that reads all items until it finds an EOF
   i=0;
   while ( fscanf(fp,"%s",s[i++]) != EOF); // printf("read\n"); 
   printf("I have read all stuff from the file\n");
   // Note the real size
   size=i-1;
   // just to indicate that there is no string at s[size];
   s[size][0]='\0'; // not really needed

   // now read a string and insert it in the array, by doing a replacement
   // read a new string from the user - from the keyboard
   printf("Now give me a new string to insert\n");
   scanf("%s", newstr);

   // Find where this new string should sit in the array 
   printf("\n\nFinding the position of \"%s\" in the array\n",newstr);
   pos = find_position(s,size,newstr);

   // now exchange the string in position pos and this new string
   printf("Replacing the first \"%s\" \n",s[pos]);
   exchange_strings(s[pos],newstr);

   // now print the  new array of strings
   printf("\nPrinting new array :\n");
   for ( i=0; i < size; i++)
	   printf("%s\n",s[i]);

   // now print the removed string
   printf("We replaced \"%s\" \n",newstr);

}


// This is to demonstrate pointer vs character array
void main2(){
	char s[]="Hello how are you?";   // This is an array
	char *p="Hello how are you?";	 // This is a pointer
	printf("length is %d\n",find_length(s));
	printf("length is %d\n",find_length("Hello how are you?"));
	printf("length is %d\n",find_length(p));
	printf("Size of s is %d\n",(int) sizeof(s));
	printf("Size of p is %d\n",(int) sizeof(p));
}

// This is to demonstrate how a string is different from a character array
void main3(){
	char a[6]={'H','e','l','l','o','x'};
        char b[6]={'F','e','l','l','o','\0'};
        char c[6]="Hello";
        char d[10]={'H','e','l','l','o','\0','R','a','m','\0'};
	printf("%s\n",a);
	printf("%s : %s : %s : %s \n",a,b,c,d);
	printf("%s :%s: %s \n", &d[2], &d[5], &d[6]);
}
