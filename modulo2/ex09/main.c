#include <stdio.h>
#include "sum_and_subtract.h"

char A = '1';
short B = 1;
long C = 1;
long D = 1;

int main(void){
	
	long long result = sum_and_subtract();
	
	printf(" The result is: %lld \n", result);
	
	return 0;
}
