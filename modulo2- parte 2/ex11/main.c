#include <stdio.h>
#include "test_flags.h"

int op1 = 2;
int op2 = -2;

int main(void) {
	
	printf("Operator 1 : %d\n", op1);
	printf("Operator 2 : %d\n", op2);
	
	char result = test_flags();
	
	printf("Result of the sum: %d\n", result);
	
	return 0;
	
}
