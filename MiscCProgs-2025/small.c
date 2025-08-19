#include <unistd.h>
#include <stdio.h>
// This is to illustrate something interesting
// internal representations of everything -integers, floating point numbers or 
// characters - all of them are actually just binaries bit sequences
int main(){
	char  a1='h', a2='e'; 
	int   a3=108, a4=108, a5=111; 
	char  a6='\n';
	float f=3.1415;

	// write() function simply tries to print the first byte in the
	// given variable as a character
	// 'h'               'e'
	write(1,&a1,1);    write(1,&a2,1);

	// 'l'               'l'
	write(1,&a3,1);    write(1,&a4,1);

	// 'o'               '\n'
	write(1,&a5,1);    write(1,&a6,1); 

	// ??
	write(1,&f,1);     printf("\n");
}
