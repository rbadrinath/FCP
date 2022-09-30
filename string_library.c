#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 20

// function prototypes
void exchange_strings(char s[], char t[]);
int compare_and_exchange(char s[], char t[]);
int find_position(char sorted_arr[][20], int arrsize, char newstr[]);

//
// A function to exchange (swap) two character strings
void exchange_strings(char s[], char t[]){
  // This is very similar to swapping of the contents of two variables
  // Note that s and t are pointers...
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

void main(){
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
   while ( fscanf(fp,"%s",s[i++]) != EOF) printf("read\n"); 
   size=i;
   printf("I have read all stuff from the file\n");

   // read a new string from the user - from the keyboard
   printf("Now give me a new string to add\n");
   scanf("%s", newstr);

   printf("Finding its position\n");
   pos=find_position(s,size,newstr);

   // now replace the string in position pos by this new string
   printf("Replacing %s \n",s[pos]);
   exchange_strings(s[pos],newstr);

   // now print the  new array of strings
   printf("Printing new array :\n");
   for ( i=0; i < size; i++)
	   printf("%s\n",s[i]);

}
