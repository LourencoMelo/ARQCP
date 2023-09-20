#include <stdio.h>
#include "fill_student.h"


typedef struct {
	char age;
	short number;
	int grades[10];
	char name[80];
	char address[120];
}	Student;


int main(void){
	Student s1;
	Student s2;
	Student s3;
	Student s4;
	Student s5;
	
	Student arrayStudents[5] = {s1, s2, s3, s4,s5};
	
	Student *ptrStudent = &arrayStudents[0];
	
	char age = 19;
	
	short number = 2;
	
	char nameStudent[80] = "Lourenço Melo";
	
	char *ptrNameStudent = nameStudent;
	
	char addressStudent[120] = "Porto, Vila Nova de Gaia";
	
	char *ptrAdress = addressStudent;
	
	fill_student(ptrStudent, age, number, ptrNameStudent, ptrAddress);
	
	int i;
	
	for(i=0; i <4; i++){
		printf("Student %d \n", arrayStudents[i].number);
		printf("Age: %d \n", arrayStudents[i].age);
		printf("Name: %s \n", arrayStudents[i].name);
		printf("Address: %s \n ", arrayStudents[i].address);
		printf("\n");
	}
	
	return 0;
}
