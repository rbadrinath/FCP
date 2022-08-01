#include <stdio.h>
#include <ctype.h>
void swap_two_variable_values(){
	// var1 and var2 are the two variables for which we want to interchange the contents.
	int var1;
	int var2;
	// We'll also need a temporary variable
	int temp;

	scanf("%d %d", &var1, &var2);
	printf("Got before swap var1=%d,  var2=%d \n", var1, var2);

	// Now do the swapping steps should interchange their values
	

	// After this, we should see the variable values interchanged
	printf("Now after  swap var1=%d,  var2=%d \n", var1, var2);

	// POSTSCRIPT: I think it would be a good thing to try to interchange strings or other types, just for fun.
}

void solve_quadratic(){
	float a,b,c;
	float d;
	float root1, root2;

	// Use scanf and read in the coefficients a,b and c
	
	// compute discremenant, ie b squared minus 4ac
	// d=...
	
	// compute roots root1 and root2
	// 
	
	// Now print the roots
}

void compute_vector_components(){
	// read in vector magnitute r (+ve float) and the direction theta (in radians)
	
	// compute the x coordinate ( r cos theta ) and y coordinate ( r sin theta )
	
	// print the coordinates
}

void compute_vector_mag_and_direction(){
	// read in the (x,y) coordinates of the vector
	
	// compute the magnitude
	
	// compute the direction then 
	
	// print the mag and direcion
}

void convert_to_upper(){
	// Let us declare a variable and iniialize its contents.
	char name[20]="My Dear Friend\n";
	int i;
	for (i=0; name[i]!='\0' ; i++ )
		if (isalpha(name[i]))
			name[i]=toupper(name[i]);
	printf("Name after conversion is:%s",name);
}

void show_sizes(){
	printf("\n For commonly used types :\n");
	printf("sizeof(char) is     %ld\n",sizeof(char));
	printf("sizeof(int) is      %ld\n",sizeof(int));
	printf("sizeof(float) is    %ld\n",sizeof(float));
	printf("sizeof(double) is   %ld\n",sizeof(double));
	printf("sizeof(int *) is    %ld\n",sizeof(int *));

	printf("\n\n Additionally :\n");


	printf("sizeof(short int) is          %ld\n",sizeof(short int));
	printf("sizeof(unsigned short int) is %ld\n",sizeof(unsigned short int));
	printf("sizeof(long int) is           %ld\n",sizeof(long int));
	printf("sizeof(unsigned long int) is  %ld\n",sizeof(unsigned long int));
	printf("sizeof(long long int) is      %ld\n",sizeof(long long int));
	printf("sizeof(unsigned long long int) is  %ld\n",sizeof(unsigned long long int));
}

void main(){
	convert_to_upper();
}
