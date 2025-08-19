// I have N chocolates and wish to divide it as equally as possible among S students.
// How must I distribute the chocolates
// Idea: Quite simple  every body gets at least N div S chocolates.
//       K=N % S students get one more each (N div S)+1 chocolates
//       and S - K Students get N div S chocolates
//
#include <stdio.h>
int main(){
	// modeling the chocolates, students
	int nChokos,nStudents;
	// nMore is the number of studnts who get one more chocolate
	int nMore;
	printf("Please enter the number of chocolates available and the number of students: ");
	scanf("%d %d",&nChokos, &nStudents);
	// number of students who get more than the others
	nMore=nChokos%nStudents;

	if (nMore == 0) 
		printf("All %d students get %d chokos\n",nStudents,nChokos/nStudents);
	else {
		printf("%d students get %d chokos\n",nMore, nChokos/nStudents+1);
		printf("%d students get %d chokos, and\n",nStudents-nMore, nChokos/nStudents);
	}
}
