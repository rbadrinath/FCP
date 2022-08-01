#include <stdio.h>
int main(){
	int y=99,n=99;
	FILE * f1 = fopen("/tmp/blah","r");
	n = fscanf(f1," %d", &y);
	if ( n == -1 ){
		perror("try to read:");
	}
	printf(" I got : %d items %d\n",n,y);
	fclose(f1);


	FILE * f2 = fopen("/tmp/blah","w");
	int x=y+1;
	fprintf(f2,"%d",x);
	fclose(f2);
}
