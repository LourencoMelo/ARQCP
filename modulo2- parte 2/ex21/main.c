#include <stdio.h>
#include "new_salary.h"

int code = 2;
int currentSalary = 0;

int main(void){
	
	int raisedSalary = new_salary();
	
	printf("The raised salary is : %d \n", raisedSalary);
	
	return 0;
}
