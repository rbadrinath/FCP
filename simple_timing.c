#include <stdio.h>
#include "timeutil.h"
#define ILIMIT 10000
#define JLIMIT 80000


TimeStruct times;

#define METHOD 2

int main(){
	int i,j,k,l,m,n;
	set_time_start(&times);
	for(i=0;i<ILIMIT;i++)
		for(j=0;j<JLIMIT;j++)
#if METHOD == 1
			if ( (n=j*7) == 0 ) n++;
#else			
			if ( (n=(j<<3 -j)) == 0 ) n++;
#endif
	set_time_end(&times);
	long t = get_time_usage(&times);
	printf("time - %ld\n",t);

}
