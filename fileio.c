#include <stdio.h>
#include <stdlib.h>
void using_standardio(){
	int n;
	char sign;
	printf(" Give me a number : ");
	scanf("%d",&n);     
	sign= n < 0 ? '-' : '+' ;
	printf("This is %cve\n",sign);
}
void using_file(){
	int n;
	int i;
	char sign;
	FILE * fp1, * fp2  ;
	fp1=fopen("/tmp/input_file","r");
	fp2=fopen("/tmp/output_file","w");
	for (i=0;i<12; i++) {
	   /**
	   if ( fscanf(fp1,"%d",&n) == EOF)  {
		   printf("TOO FEW NUMBERS IN FILE\n"); exit(1);
	   }
	   **/
	   sign= n < 0 ? '-' : '+' ;
	   fprintf(stdout,"This is %cve\n",sign);
	}
}
void main(){
	using_file();
}
