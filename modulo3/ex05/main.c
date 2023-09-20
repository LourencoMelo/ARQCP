#include <stdio.h>
#include "vec_sum.h"

int num;
int *ptrvec;

int main(void){
	num = 3;
	int result = 0;
	int vec1[] = {1,2,3};
	ptrvec = vec1;
	result = vec_avg();
	
	printf("Result %d", result);
	
	
	return 0;
}
