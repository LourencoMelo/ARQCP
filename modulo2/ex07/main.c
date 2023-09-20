#include <stdio.h>
#include "crossSumBytes.h"

short s1 = 1;
short s2 = 2;

int main(void){
	
	
	short sum = crossSumBytes();

	printf(" The short is : %hu \n", sum);
	
	return 0;

}
