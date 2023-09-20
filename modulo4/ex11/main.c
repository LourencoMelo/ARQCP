#include <stdio.h>
#include "rotate_left.h"
#include "rotate_right.h"

int main(void){
	int n = 7;
	int nbits = 3;
	
	int resultLeft = rotate_left(n, nbits);
	
	int resultRight = rotate_right(n, nbits); 
	printf("Left Rotation of %d by %d \n",n, nbits);
	printf("Result: %d \n", resultLeft);
	printf("Right Rotation of %d by %d \n", n, nbits);
	printf("Result: %d \n", resultRight);
	
	return 0;
}

