#include <stdio.h>
// Find the difference in minutes between two given times in the same month
// The two times are given as date and hrs eg.  23 15:32  (to mean 23rd 3 32 pm)
// assume first is before second
// convert each to minutes, then take the difference
int main(){
	// modeling the problem in variables
	// The first time
	int date,hrs,mins;
	// The second time
	int date2,hrs2,mins2;

	// read in the first time
	scanf("%d %d:%d",&date,&hrs,&mins);

	// read in the first time
	scanf("%d %d:%d",&date2,&hrs2,&mins2);


	// convert each of the above times to minutes
	int daymins=date*24*60+hrs*60+mins;
	int daymins2=date2*24*60+hrs2*60+mins2;

	// print the difference
	printf("%d\n",daymins2-daymins);
}
