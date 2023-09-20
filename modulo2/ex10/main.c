#include <stdio.h>
#include "sum2ints.h"

int op1 = -3;
int op2 = 2;

int main(void){
	
	long long res = sum2ints();
	
	printf("Sum: %lld \n", res);
	
	return 0;
}
