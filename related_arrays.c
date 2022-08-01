#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 20
#define NAME_LENGTH  15
void show_a_student_info(char name[MAX_STUDENTS][NAME_LENGTH], float score[MAX_STUDENTS], int size, char q[]){
	int idx=0;
	for( idx=0 ; idx < size ; idx++ ){
		if (strcmp(name[idx],q) ==  0 ){
			printf("%s %f\n",q,score[idx]);
			return;
		}
	}
	printf("%s not found!\n",q);
}

int read_all_students_info(char name[MAX_STUDENTS][NAME_LENGTH], 
		       float score[MAX_STUDENTS]){
	// number of students
	int n;
	int idx;
	printf("Howmany students ? ");
	scanf("%d",&n);
	printf("Now input student name and score for each :\n");
	for (idx=0; idx < n ; idx++ ){
		printf("%2d:",idx+1);
		scanf("%s %f",name[idx],&score[idx]);
	}
	return n;
}

void main() {
	char name[MAX_STUDENTS][NAME_LENGTH];
	float  score[MAX_STUDENTS];
	int nstudents=0;
	char q_name[NAME_LENGTH];
	nstudents = read_all_students_info(name,score);

	printf("Now lets look for a student in this list .. \n");
	while (1) {
		printf("Give me a student's name :");
		scanf("%s", q_name);
		show_a_student_info(name,score,nstudents,q_name);
	}


}
