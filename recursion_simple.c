#include <stdio.h>
#include <stdlib.h>
#define main_sum main


// print all characters upto a given character
void printupto(char c){

	// base case is a character less than 'a' : do nothing
	if (c < 'a')
		return ;


	// usual case 
	//    first print all characters upto the previous character.
	printupto(c-1);
	//    then print this given character
	printf("%c",c);

	// use gdb and investigate what the frame/stack looks like
}

// add numbers upto a given number and return the total
// mathematically
//   sum(n) is
//          0 if n <=0	(base case)
//
//          n+sum(n-1) otherwise (recursion case)
int sum(int n) {
	// base case
	if (n <= 0 )
		return 0;

	int s;
	// otherwise
	//  find the sum of upto n-1
	s = sum(n-1);
	//  add n to that
	s += n;
	return s;
}

void main_print(){
	char c;
	scanf(" %c",&c);
	
	// we want  the character to be one of 'a' ... 'c'
	if ( c > 'z' || c < 'a' )
		exit(1);

	printupto(c-1);
	printf("%c\n",c);
}

void main_sum(){
	int n;
	scanf("%d",&n);
	int s = sum(n);
	printf("sum of integers from 0 to %d is %d\n",n,s);
}

// Recursiv structure of any problem solution can be used to create a
// recursive function
// Exercise: 0. Write a recursive function to print the triangle of stars
//              left justified. triangle1(n): 
//              The idea is: if n<=0 nothing to print
//                           else print n stars in a row and a newline
//                                and recursively call to print triangle1(n-1)
//                                	but with n-1
//           1. recursively print similar to triangle1 but inverted!
//           2. recursively print paranthesis(n) will be
//                  ((((... n times followed by )))) equal number of times
//                  a recursive way to look at it is 
//                  (  followed by parenthesis(n-1) followed by  )
//           3. recursively print a palindrome. If someone gave 'c' print
//                   mypal('c') would print   cbabc
//                   mypal('e') would print edcbabcde
// Exercise: 1. write a recursion for the sum 0-1+2-3+4-5 ...... upto given n
//           note if n is odd we subtract. If n is even we add.
//           he sums will look like 0 -1 1 -2 2 -3 3 ...
//
//           2. Write a recursion for the fibonacci sequence with base cases:
//              f0 = 0 and f1 = 1
//              f(n) = f(n-1) + f(n-2) for n > 1
//
//           3. nCr = 0 if n<r  
//                  = 1 if n=r
//                  = 1 if n>r and r=0
//                  = n-1Cr + n-1Cr-r  if n > r > 0 
//		assume of course than n >=0 and r >= 0
//		and compute nCr for given n and r
