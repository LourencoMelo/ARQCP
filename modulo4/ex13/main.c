#include <stdio.h>
#include "activate_bits.h"

int main(void){
	int a, left, right;
	a = 100;
	left = 3;
	right = 5;
	int result = activate_bits(a, left, right);
	printf("Result: %ds", result);
	return 0;
}
