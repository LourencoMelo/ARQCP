#include <stdio.h>
#include "count_even.h"

int main(void){
	int n=5;
	short a[]={1,4,5,2,3};
	short *vec;
	
	vec = a;
	
	int result = count_even(vec, n);
	printf("Result: %d", result);
	
	return 0;
}
