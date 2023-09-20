#include <stdio.h>
#include "keep_positives.h"

int *ptrvec;
int num;

int main(void){
	num = 5;
	int i;
	int j;
	int vec[] = {2,-5,3,2,-4};
	printf("Array: \n");
	for(i = 0;i < num; i++){
		printf("%d",vec[i]);
	}	
	ptrvec = vec;
	keep_positives();
	printf("\n New Array: \n");
	for(j = 0;j < num; j++){
		printf("%d",vec[i]);
	}
	
	return 0;
}
