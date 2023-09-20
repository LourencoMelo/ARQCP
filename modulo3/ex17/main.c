#include <stdio.h>
#include "array_sort.h"

int num;
int *ptrvec;

int main(void){
	num = 5;
	int i, j;
	int vec[]={2,5,4,3,1};
	ptrvec = vec;
	printf("Array:\n");
	for(j=0;j<num;j++){
		printf("%d \n",vec[i]);
	}
	
	array_sort();
	printf("Sorted Array:")
	for(i=0;i < num;i++){
		printf("%d \n",vec[i]);
	}	

	return 0;
}
