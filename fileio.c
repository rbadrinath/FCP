#include <stdio.h>
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
	char sign;
	FILE * fp1, * fp2  ;
	fp1=fopen("/tmp/input_file","r");
	fp2=fopen("/tmp/output_file","w");
	fscanf(fp1,"%d",&n);     
	sign= n < 0 ? '-' : '+' ;
	fprintf(fp2,"This is %cve\n",sign);
}
void main(){
	using_file();
}
