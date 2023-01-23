#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#define INFILE "/tmp/input_file"
#define OUTFILE "/tmp/output_file"


#define main_stdio main

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
	// printf(" Give me a number : "); Skip this; not doing user interaction
	fp1=fopen(INFILE,"r");
	fp2=fopen(OUTFILE,"w");
	for (i=0;i<12; i++) {
	   fscanf(fp1,"%d",&n);
	   /*
	   if ( fscanf(fp1,"%d",&n) == EOF)  {
		   printf("TOO FEW NUMBERS IN FILE\n"); exit(1);
	   }
	   */
	   sign= n < 0 ? '-' : '+' ;
	   fprintf(fp2,"This is %cve\n",sign); // replace this by stdout for fun
	}
	fclose(fp1);
	fclose(fp2);
}
long rand_from_time(){
	struct timeval tv; struct timezone tz;
	gettimeofday(&tv,&tz);
	return (long) tv.tv_usec;
}
void seed_random(){
	srand(rand_from_time());
}
void add_a_quote(FILE * fp){
	static char * quotes[]={"Let go, or be dragged.",
				"Look before you leap.",
				"No pain, no gain.",
	"Do not let the behavior of others destroy your inner peace."};
	fprintf(fp,"%s\n",quotes[0]);
	/*
	seed_random();
	int i=random()%4;
	fprintf(fp,"%s\n",quotes[i]);
	*/
}
void append_to_file(char * filename){
	FILE * fp = fopen(filename,"a");
	add_a_quote(fp);
	fclose(fp);
}

// define one of these as main() for testing
void main_fileio(){
	using_file();
	append_to_file(OUTFILE);
}

void main_stdio(){
	using_standardio();
}
